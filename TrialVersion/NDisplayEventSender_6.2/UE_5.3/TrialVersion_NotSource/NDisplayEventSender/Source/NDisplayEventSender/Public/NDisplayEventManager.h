// Copyright Ye RongZhen(MapleLeaf_Ye) 2024


#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Cluster/IDisplayClusterClusterManager.h"
#include "UObject/UnrealTypePrivate.h"
#include "GameFramework/SaveGame.h"
#include "NDisplayEventManager.generated.h"


#define VERSION_JSON 1
#define VERSION_BINARY 0

#define COMPLETEVERSION 0

#define PRINTTRIALVERSIONMESSAGE(LogCategory,InParamType)\
static const FString TVSupportType = TEXT("The current type is not supported. Please obtain the full plug-in version.\n")\
									 TEXT("The trial version supported bool uint8 int32 int64 float double FVector");\
static const FString TVDisplayMessage = FString::Printf(TEXT("Current Type : <%s> is not supported in the trial version!!!\n%s"), *InParamType, *TVSupportType);\
UE_LOG(LogCategory, Error, TEXT("%s"), *TVDisplayMessage);\
ANDisplayEventManager::ShowTrialVersionMessage(TVDisplayMessage)

#define PRINTTRIALVERSIONMESSAGE_NOTTYPE(LogCategory)\
static const FString TVSupportType = TEXT("The current type is not supported. Please obtain the full plug-in version.\n")\
									 TEXT("The trial version supported bool uint8 int32 int64 float double FVector");\
UE_LOG(LogCategory, Error, TEXT("%s"), *TVSupportType);\
ANDisplayEventManager::ShowTrialVersionMessage(TVSupportType)

USTRUCT(BlueprintType)
struct NDISPLAYEVENTSENDER_API FMultiNodeFunParam
{
	GENERATED_USTRUCT_BODY()
public:
	FMultiNodeFunParam()
	{
		bIsValid = false;
	}
	FMultiNodeFunParam(const bool& bInIsUObject, const FString& InUObjectSoftPath, const TArray<uint8>& InFunParamData) : 
		bIsUObject(bInIsUObject), UObjectSoftPath(InUObjectSoftPath), FunParamData(InFunParamData)
	{
		if (bIsUObject)
		{
			if (UObjectSoftPath.IsEmpty())
			{
				bIsValid = false;
				return;
			}
			static FString CurrStr = UObjectSoftPath.Replace(*FString("-+-"), *FString(":"));
			FSoftObjectPath USOP(CurrStr);
			UObject* outObject = USOP.ResolveObject();
			bIsValid = outObject != nullptr;
		}
		else
		{
			bIsValid = FunParamData.GetData() != nullptr && FunParamData.Num() > 0;
		}
	}
	UPROPERTY(SaveGame)
	bool bIsValid;
	UPROPERTY(SaveGame)
	bool bIsUObject;
	UPROPERTY(SaveGame)
	FString UObjectSoftPath;
	UPROPERTY(SaveGame)
	TArray<uint8> FunParamData;
};

UCLASS()
class NDISPLAYEVENTSENDER_API UMultiNodeFunParamPackager
	: public USaveGame
{
	GENERATED_BODY()

public:
	UFUNCTION()
	void AddNewFunParam(const FMultiNodeFunParam& InParam)
	{
		PackagedParams.Add(InParam);
	}
	void AssignNewFunParams(TArray<FMultiNodeFunParam>& InParams)
	{
		PackagedParams = InParams;
	}
	UFUNCTION()
	void ClearPackagerParams()
	{
		FunOwner = FString();
		FunName = FString();
		PackagedParams.Empty();
	}
	UFUNCTION()
	void SetIsCPP(const bool bInIsCPP)
	{
		bIsCPP = bInIsCPP;
	}
	UFUNCTION()
	void SetFuncOwnerAndFuncName(const FString& InFuncOwner, const FString& InFuncName)
	{
		FunOwner = InFuncOwner;
		FunName = InFuncName;
	}
	UFUNCTION()
	bool GetIsCPPEvent()
	{
		return bIsCPP;
	}
	UFUNCTION()
	FString& GetFunOwner()
	{
		return FunOwner;
	}
	UFUNCTION()
	FString& GetFunName()
	{
		return FunName;
	}
	UFUNCTION()
	FMultiNodeFunParam& GetPackagedParam(int32 InIndex)
	{
		check(PackagedParams.IsValidIndex(InIndex));
		return PackagedParams[InIndex];
	}

private:
	UMultiNodeFunParamPackager()
	{
		bIsCPP = true;
	}

	UPROPERTY(SaveGame)
	bool bIsCPP;
	UPROPERTY(SaveGame)
	FString FunOwner;
	UPROPERTY(SaveGame)
	FString FunName;
	UPROPERTY(SaveGame)
	TArray<FMultiNodeFunParam> PackagedParams;
};

UENUM()
enum class EExePath : uint8
{
	NormalExe,
	MultiNodeExe,
	Error,
};

UCLASS()
class NDISPLAYEVENTSENDER_API ANDisplayEventManager : public AActor
{
	GENERATED_BODY()

	DECLARE_LOG_CATEGORY_CLASS(NDisplayEventManagerLog, Display, All);
protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	
private:

	FOnClusterEventJsonListener EventListener;

	void OnClusterEventJsonHandler(const FDisplayClusterClusterEventJson& Event);



	FOnClusterEventBinaryListener EventListener_Binary;

	void OnClusterEventBinaryHandler(const FDisplayClusterClusterEventBinary& Event);



	/**
	* 标记当前执行的函数
	*/
	UPROPERTY()
	TMap<FName,bool> FunExeFlag;

	/**
	* 过滤绑定第一次执行的开关
	*/
	UPROPERTY()
	bool IsBoundEvent = false;

	UPROPERTY()
	UMultiNodeFunParamPackager* FunParamPackager;

public:
	/**
	* 支持函数和事件的转换，但尽量保证转换节点放置在第一个，否则转换节点前面的逻辑可能会被执行多次
	*注意：
	* 1.可以使用普通函数或者事件去调用被转换后的函数或事件，且可以连续调用，但是不要短时间内调用同一个被转换后的函数或者事件（名字相同的）多次，否则可能只能执行一次
	* 2.正在转换的函数或者事件内部请不要去调用其他已转换的事件或者函数，否则可能会导致执行顺序混乱且多次执行
	* 3.转换事件尽量写在每个节点都会存在的对象上（因为转换节点需要通过该对象寻找函数，如果写在一个非各个结点都存在的对象上会导致那个节点无法执行目标函数）
	* 4.尽量只用ExecuteMultiNodeEvent_Auto节点，如果非要使用ExecuteMultiNodeEvent那么每个节点需要执行的逻辑请写在NormalExe引脚，如果需要主机特例执行逻辑则写在MultiNodeExe（因为该引脚是主机分发事件执行前执行的，其它节点不执行该引脚的逻辑）
	* 5.转换函数或事件的参数顺序必须一对一，例如：函数参数一必须对应转换节点参数一，函数参数二必须对应转换节点参数二
	* 6.定义的函数请不要有返回值，如果实在需要返回值可以实现逻辑内结果保存到一个中间类，各个结点再去取
	*
	* 触发多节点事件
	* @Param FunOwner 函数所存在的对象
	* @Param FunName 函数名字
	* @Param FunParams 函数参数
	* @Return Path 当前事件出口，NormalExe正常执行逻辑，MultiNodeExe正在准备调用多节点
	*/
	UFUNCTION()
	void TriggleMultiNodeEvent(UObject* FunOwner,FName FunName,TMap<FString,FString>FunParams,EExePath& Path);

	/**
	* 触发多节点事件蓝图二进制版本
	* @Param FunOwner 函数所存在的对象
	* @Param FunName 函数名字
	* @Param FunParamPackager 函数参数容器
	* @Return Path 当前事件出口，NormalExe正常执行逻辑，MultiNodeExe正在准备调用多节点
	*/
	UFUNCTION()
	void TriggleMultiNodeEvent_Binary(UObject* FunOwner, FName FunName, TArray<FMultiNodeFunParam>& FunParams, EExePath& Path);

	/**
	* 标记多节点事件结束
	* @Param FunOwner 函数所存在的对象
	* @Param FunName 函数名字
	*/
	UFUNCTION()
	void CallNdisplayEventOver(UObject* FunOwner,FName FunName);

	UMultiNodeFunParamPackager*& GetFunParamPackager();

	virtual bool IsPrimaryNode() const;

	static void ShowTrialVersionMessage(const FString& InMessage);
	
};
