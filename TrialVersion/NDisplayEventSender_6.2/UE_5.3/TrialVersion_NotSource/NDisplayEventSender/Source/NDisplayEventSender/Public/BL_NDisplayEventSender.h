// Copyright Ye RongZhen(MapleLeaf_Ye) 2024


#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "NDisplayEventManager.h"

#include "BL_NDisplayEventSender.generated.h"


UCLASS()
class NDISPLAYEVENTSENDER_API UBL_NDisplayEventSender : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	DECLARE_LOG_CATEGORY_CLASS(BL_NDisplayEventSenderLog, Display, All);
public:
	/**
	*用于将输入参数转为字符串，方便多节点参数传递，配合函数K2_TriggleMultiNodeEvent_Simple（ExecuteMultiNodeEvent）使用，作为形参传入
	* @Param WorldContextObject 上下文对象
	* @Param InParam 泛型，输入参数
	*/
	UFUNCTION(BlueprintCallable,BlueprintPure,CustomThunk,Category = "NDisplayEventSender|EventSenderLibrary", meta = (CustomStructureParam = "InParam", Keywords = "NDString", WorldContext = "WorldContextObject"))
	static FString InputParamToString(const UObject* WorldContextObject, const int32& InParam);
	DECLARE_FUNCTION(execInputParamToString);
	static FString InputParamToString_Native(const UObject* WorldContextObject,const FProperty* InPro,void* ProAddress);

	/**
	*用于将输入参数转为字符串，方便多节点参数传递,这个专门服务于二进制转换的
	* @Param WorldContextObject 上下文对象
	* @Param InParam 泛型，输入参数
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintInternalUseOnly, CustomThunk, Category = "NDisplayEventSender|EventSenderLibrary", meta = (CustomStructureParam = "InParam", WorldContext = "WorldContextObject"))
	static FMultiNodeFunParam InputParamToMultiNodeFunParam(const UObject* WorldContextObject, const int32& InParam);
	DECLARE_FUNCTION(execInputParamToMultiNodeFunParam);
	static FMultiNodeFunParam InputParamToMultiNodeFunParam_Native(const UObject* WorldContextObject, const FProperty* InPro, void* ProAddress);

	/**
	*For multi - node event distribution, you only need to specify the function parameters for it, you can distribute the event on the primary node and execute on each node, note that this node must be placed in the custom event or function first
	* Transformations of functions and events are supported, but try to ensure that the transformation node is placed first, otherwise the logic in front of the transformation node may be executed multiple times
	* Note:
	* 1. You can use ordinary functions or events to call the converted function or event, and can be called continuously, but do not call the same converted function or event (with the same name) several times in a short time, otherwise it may only be executed once
	* 2. Do not call other converted events or functions inside the function or event that is being converted; otherwise, the execution order may be confused and multiple executions may occur
	* 3. Try to write the conversion event on the object that every node will exist(because the conversion node needs to find a function through the object, if written in an object that does not exist every node will cause that node to fail to execute the objective function)
	* 4. Try to use only ExecuteMultiNodeEvent_Auto.If you must use ExecuteMultiNodeEvent, write the logic to be executed by each node in the NormalExe pin.If host - specific logic is required, write it in MultiNodeExe(because this pin is executed before the host distributes the event, the logic of this pin is not executed on other nodes).
	* 5. The order of the parameters of the conversion function or event must be one - to - one, for example: function parameter 1 must correspond to transition node parameter 1, function parameter 2 must correspond to transition node parameter 2
	* 6. The defined function please do not have a return value, if the return value is really needed, the result can be saved to an intermediate class in the logic, and each node will be taken
	* 7. Converted functions or events can also be executed as ordinary functions in non-ndisplay startup mode without any impact
	* @Param WorldContextObject Context object
	* @Param FunParams Input parameters, simply insert the parameter values in order
	* @Return Path Indicates the current event exit.NormalExe is normal.MultiNodeExe is ready to call
	*/
	/**
	*用于多节点事件分发，只需要为其指定函数的参数，就可以在主节点上将事件分发并执行在各个结点上，注意这个节点必须被放置在自定义事件或者函数的第一个
	* 支持函数和事件的转换，但尽量保证转换节点放置在第一个，否则转换节点前面的逻辑可能会被执行多次
	*注意：
	* 1.可以使用普通函数或者事件去调用被转换后的函数或事件，且可以连续调用，但是不要短时间内调用同一个被转换后的函数或者事件（名字相同的）多次，否则可能只能执行一次
	* 2.正在转换的函数或者事件内部请不要去调用其他已转换的事件或者函数，否则可能会导致执行顺序混乱且多次执行
	* 3.转换事件尽量写在每个节点都会存在的对象上（因为转换节点需要通过该对象寻找函数，如果写在一个非各个结点都存在的对象上会导致那个节点无法执行目标函数）
	* 4.尽量只用ExecuteMultiNodeEvent_Auto节点，如果非要使用ExecuteMultiNodeEvent那么每个节点需要执行的逻辑请写在NormalExe引脚，如果需要主机特例执行逻辑则写在MultiNodeExe（因为该引脚是主机分发事件执行前执行的，其它节点不执行该引脚的逻辑）
	* 5.转换函数或事件的参数顺序必须一对一，例如：函数参数一必须对应转换节点参数一，函数参数二必须对应转换节点参数二
	* 6.定义的函数请不要有返回值，如果实在需要返回值可以实现逻辑内结果保存到一个中间类，各个结点再去取
	* 7.转换过后的函数或事件在非Ndisplay启动模式下也同样可以当普通函数执行，不受任何影响
	* @Param WorldContextObject 上下文对象
	* @Param FunParams 输入参数,只需将参数值按顺序插入即可
	* @Return Path 当前事件出口，NormalExe正常执行逻辑，MultiNodeExe正在准备调用多节点
	*/
	UFUNCTION(BlueprintCallable, CustomThunk, Category = "NDisplayEventSender|EventSenderLibrary", meta = (Keywords = "NDisplay,NDis,NDisEvent,NDisplayEvent,NDisFunc,Func", DisplayName = "ExecuteMultiNodeEvent", WorldContext = "WorldContextObject", ExpandEnumAsExecs = "ExePath"))
	static void K2_TriggleMultiNodeEvent_Simple(const UObject* WorldContextObject, const TArray<FString>& FunParams, EExePath& ExePath);
	DECLARE_FUNCTION(execK2_TriggleMultiNodeEvent_Simple);
	static void TriggleMultiNodeEvent_Simple_Native(const UObject* WorldContextObject, UObject* FunOwner, FName FunName, const TArray<FString>& FunParams, EExePath& ExePath);

	/**
	*这个节点只用于二进制版本，无需对外开放，使用者只需要调用ExecuteMultiNodeEvent_Auto(K2Node_TransformNDisFunc)节点即可
	* @Param WorldContextObject 上下文对象
	* @Param FunParams 输入参数,只需将参数值按顺序插入即可
	* @Return Path 当前事件出口，NormalExe正常执行逻辑，MultiNodeExe正在准备调用多节点
	*/
	UFUNCTION(BlueprintCallable, BlueprintInternalUseOnly, CustomThunk, Category = "NDisplayEventSender|EventSenderLibrary", meta = (DisplayName = "ExecuteMultiNodeEvent_Binary", WorldContext = "WorldContextObject", ExpandEnumAsExecs = "ExePath"))
	static void K2_TriggleMultiNodeEvent_Binary_Simple(const UObject* WorldContextObject, UPARAM(ref)TArray<FMultiNodeFunParam>& FunParams, EExePath& ExePath);
	DECLARE_FUNCTION(execK2_TriggleMultiNodeEvent_Binary_Simple);
	static void TriggleMultiNodeEvent_Simple_Binary_Native(const UObject* WorldContextObject, UObject* FunOwner, FName FunName, TArray<FMultiNodeFunParam>& FunParams, EExePath& ExePath);

	/**
	*For multi - node event distribution, the CPP function can be converted to a multi - node distribution function only by corresponding its template to the function parameters to be defined
	* Note:
	* 1. You can use ordinary functions or events to call the converted function or event, and can be called continuously, but do not call the same converted function or event (with the same name) several times in a short time, otherwise it may only be executed once
	* 2. Do not call other converted events or functions inside the function or event that is being converted; otherwise, the execution order may be confused and multiple executions may occur
	* 3. Try to write the conversion event on the object that every node will exist(because the conversion node needs to find a function through the object, if written in an object that does not exist every node will cause that node to fail to execute the objective function)
	* 4. Execute this function in the first line of the defined function
	* 5. The order of the parameters of the conversion function or event must be one - to - one, for example: function parameter 1 must correspond to transition node parameter 1, function parameter 2 must correspond to transition node parameter 2
	* 6. The defined function please do not have a return value, if the return value is really needed, the result can be saved to an intermediate class in the logic, and each node will be taken
	* 7. Functions and parameters within functions such as struct enumeration must be marked with reflection fields, for example, the converted function must be a function of the UFUNCTION() mark, and its parameters must be USTRUCT or UENUM, which can not be exposed to the blueprint, but must be marked reflection, incorporated into the reflection system
	* 8. Converted functions or events can also be executed as ordinary functions in non-ndisplay startup mode without any impact
	* Use this function if you want to distribute events to nodes in C++
	* @Param WorldContextObject Context object
	* @Param FunParams Input parameters, simply insert the parameter values in order
	* @Return Path Indicates the current event exit.NormalExe is normal.MultiNodeExe is ready to call
	* /
	/**
	*用于多节点事件分发，只需要为其模版对应要定义的函数参数，就可以将CPP函数转化为多节点分发函数
	*注意：
	* 1.可以使用普通函数或者事件去调用被转换后的函数或事件，且可以连续调用，但是不要短时间内调用同一个被转换后的函数或者事件（名字相同的）多次，否则可能只能执行一次
	* 2.正在转换的函数或者事件内部请不要去调用其他已转换的事件或者函数，否则可能会导致执行顺序混乱且多次执行
	* 3.转换事件尽量写在每个节点都会存在的对象上（因为转换节点需要通过该对象寻找函数，如果写在一个非各个结点都存在的对象上会导致那个节点无法执行目标函数）
	* 4.该函数请放在定义函数的第一行执行
	* 5.转换函数或事件的参数顺序必须一对一，例如：函数参数一必须对应转换节点参数一，函数参数二必须对应转换节点参数二
	* 6.定义的函数请不要有返回值，如果实在需要返回值可以实现逻辑内结果保存到一个中间类，各个结点再去取
	* 7.函数和函数内的参数例如结构体枚举必须使用反射字段标记，例如转换的函数必须是UFUNCTION()标记的函数，其参数必须是USTRUCT或者UENUM，可以不暴露给蓝图，但一定需要标记反射，纳入到反射系统
	* 8.转换过后的函数或事件在非Ndisplay启动模式下也同样可以当普通函数执行，不受任何影响
	*如果希望在C++分发事件到各个结点请使用这个函数
	* @Param WorldContextObject 上下文对象
	* @Param FunParams 输入参数,只需将参数值按顺序插入即可
	* @Return Path 当前事件出口，NormalExe正常执行逻辑，MultiNodeExe正在准备调用多节点
	*/
	template<typename... TArgs>
	static void TriggleMultiNodeEvent_CPP(UObject* FunOwner, const FName FunName, EExePath& ExePath, TArgs ...InArgs)
	{
		TTuple<TArgs...> params(Forward<TArgs>(InArgs)...);
		const uint8* inParamAdd = (uint8*)&params;
		TriggleMultiNodeEvent_CPP_Native(FunOwner, FunName, ExePath, inParamAdd);
	}

	/**
	*将对象转为字符串，配合函数K2_TriggleMultiNodeEvent_Simple（ExecuteMultiNodeEvent）使用，作为形参传入
	* @Param InObject 将输入的对象转为此系统传递的对象字符串
	* @Return OutObjectString 返回的字符串
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "NDisplayEventSender|EventSenderLibrary", meta = (DisplayName = "ObjectToNDisEventString", Keywords = "NDString"))
	static void K2_ObjectToNDisEventString(const UObject* InObject, FString& OutObjectString);

	/**
	*将Actor转为字符串，配合函数K2_TriggleMultiNodeEvent_Simple（ExecuteMultiNodeEvent）使用，作为形参传入
	* @Param InObject 将输入的Actor转为此系统传递的对象字符串
	* @Return OutActorString 返回的字符串
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "NDisplayEventSender|EventSenderLibrary", meta = (DisplayName = "ActorToNDisEventString", Keywords = "NDString"))
	static void K2_ActorToNDisEventString(const AActor* InActor, FString& OutActorString);

private:
	UFUNCTION(Category = "NDisplayEventSender|EventSenderLibrary")
	static void ErrorCallFunc_Native();

	static void TriggleMultiNodeEvent_CPP_Native(UObject* FunOwner, const FName FunName, EExePath& ExePath, const uint8*& InParamAddress);
};

/**
*This macro is used with EXECUTEMULTINODEEVENT_CPP_END() to execute the desired logic within CPP within functions that need to be converted to multi - node distribution
* Arguments are the name of the function that specifies the owner of the function(UObject), such as "Test", followed by the variable function parameter, which corresponds to the converted function
* Converted functions must not return void functions
* If the Test object has a function void Test::TestFun(int32i, FString s);
*Then it needs to be written as, assuming that the Test object has obtained the variable oTest
* EXECUTEMULTINODEEVENT_CPP_START(oTest, "TestFun", i, s);
*Write the logic you need to distribute
* EXECUTEMULTINODEEVENT_CPP_END();
*
*For multi - node event distribution, the CPP function can be converted to a multi - node distribution function by simply passing in function arguments to it
* Note:
* 1. You can use ordinary functions or events to call the converted function or event, and can be called continuously, but do not call the same converted function or event (with the same name) several times in a short time, otherwise it may only be executed once
* 2. Do not call other converted events or functions inside the function or event that is being converted; otherwise, the execution order may be confused and multiple executions may occur
* 3. Try to write the conversion event on the object that every node will exist(because the conversion node needs to find a function through the object, if written in an object that does not exist every node will cause that node to fail to execute the objective function)
* 4. Execute this function in the first line of the defined function
* 5. The order of the parameters of the conversion function or event must be one - to - one, for example: function parameter 1 must correspond to transition node parameter 1, function parameter 2 must correspond to transition node parameter 2
* 6. The defined function please do not have a return value, if the return value is really needed, the result can be saved to an intermediate class in the logic, and each node will be taken
* 7. Functions and parameters within functions such as struct enumeration must be marked with reflection fields, for example, the converted function must be a function of the UFUNCTION() mark, and its parameters must be USTRUCT or UENUM, which can not be exposed to the blueprint, but must be marked reflection, incorporated into the reflection system
* 8. Converted functions or events can also be executed as ordinary functions in non-ndisplay startup mode without any impact
* Use this function if you want to distribute events to nodes in C++
**/
/**
* 这个宏搭配EXECUTEMULTINODEEVENT_CPP_END()使用，在CPP内将需要转为多节点分发的函数内使用这两个宏包裹执行想要执行的逻辑
* 参数分别是指定函数的拥有者（UObject）函数的名字例如"Test",后面就是可变的函数形参，这需要对应转换的函数
* 转换的函数不得有返回值需为void函数
* 假如Test对象里面有函数void Test::TestFun(int32 i, FString s);
* 那么其里面需要写为，这里假设Test对象已经获取到变量oTest
* EXECUTEMULTINODEEVENT_CPP_START(oTest,"TestFun",i,s);
* 写你需要分发的逻辑
* EXECUTEMULTINODEEVENT_CPP_END();
* 
	*用于多节点事件分发，只需要为其传入函数参数，就可以将CPP函数转化为多节点分发函数
	*注意：
	* 1.可以使用普通函数或者事件去调用被转换后的函数或事件，且可以连续调用，但是不要短时间内调用同一个被转换后的函数或者事件（名字相同的）多次，否则可能只能执行一次
	* 2.正在转换的函数或者事件内部请不要去调用其他已转换的事件或者函数，否则可能会导致执行顺序混乱且多次执行
	* 3.转换事件尽量写在每个节点都会存在的对象上（因为转换节点需要通过该对象寻找函数，如果写在一个非各个结点都存在的对象上会导致那个节点无法执行目标函数）
	* 4.该函数请放在定义函数的第一行执行
	* 5.转换函数或事件的参数顺序必须一对一，例如：函数参数一必须对应转换节点参数一，函数参数二必须对应转换节点参数二
	* 6.定义的函数请不要有返回值，如果实在需要返回值可以实现逻辑内结果保存到一个中间类，各个结点再去取
	* 7.函数和函数内的参数例如结构体枚举必须使用反射字段标记，例如转换的函数必须是UFUNCTION()标记的函数，其参数必须是USTRUCT或者UENUM，可以不暴露给蓝图，但一定需要标记反射，纳入到反射系统
	* 8.转换过后的函数或事件在非Ndisplay启动模式下也同样可以当普通函数执行，不受任何影响
	*如果希望在C++分发事件到各个结点请使用这个函数
**/
#define EXECUTEMULTINODEEVENT_CPP_START(FunOwner,FunName,...)\
	EExePath result = EExePath::NormalExe;\
	UObject* funOwner = FunOwner ? FunOwner : this;\
	FString tempFunName;\
	FString tempFunName2;\
	FString fullFunName = FString(__FUNCTION__);\
	fullFunName.Split(FString("::"), &tempFunName, &tempFunName2);\
	const FName funName = FString(FunName).IsEmpty() ? FName(*tempFunName2) : FName(FunName);\
	UBL_NDisplayEventSender::TriggleMultiNodeEvent_CPP<>(funOwner, funName, result, __VA_ARGS__);\
	if (result != EExePath::NormalExe)\
	{\
		return;\
	}\

/**
* This macro is used with EXECUTEMULTINODEEVENT_CPP_END().The difference between EXECUTEMULTINODEEVENT_CPP_START and executemultinodeevent_cpp_start is that you don't need to pass the function name.
* In macro automatically gets the name of the function placed in the current function by the current macro
**/
/**
* 这个宏搭配EXECUTEMULTINODEEVENT_CPP_END()使用，和EXECUTEMULTINODEEVENT_CPP_START的区别就是不需要传入函数名，
* 宏内自动获取当前宏放置在当前函数内的函数名
**/ 
#define EXECUTEMULTINODEEVENT_CPP_AUTOFUNNAME_START(FunOwner,...)\
	EXECUTEMULTINODEEVENT_CPP_START(FunOwner,FString(),__VA_ARGS__)

/**
*This macro is used with EXECUTEMULTINODEEVENT_CPP_END().The difference between EXECUTEMULTINODEEVENT_CPP_START and Executemultinodeevent_cpp_start is that you don't need to pass in the function name and the object it holds.
* The macro automatically gets the name of the function that the current macro places inside the current function and the object that the function belongs to, which is to use the this pointer directly, suitable for those functions that need to be converted to multi - node events within the class
**/
/**
* 这个宏搭配EXECUTEMULTINODEEVENT_CPP_END()使用，和EXECUTEMULTINODEEVENT_CPP_START的区别就是不需要传入函数名和函数持有对象，
* 宏内自动获取当前宏放置在当前函数内的函数名和函数属于的对象也就是直接使用this指针，适合那些在本类内需要转为多节点事件的函数
**/
#define EXECUTEMULTINODEEVENT_CPP_AUTO_START(...)\
	EXECUTEMULTINODEEVENT_CPP_START(nullptr,FString(),__VA_ARGS__)

/**
* Used to mark the end of the logic implementation
**/
/**
* 用于标记逻辑实现结束
**/
#define EXECUTEMULTINODEEVENT_CPP_END() return
