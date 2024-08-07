// Copyright Ye RongZhen(MapleLeaf_Ye) 2024


#pragma once

#include "CoreMinimal.h"
#include "K2Node.h"
#include "EdGraph/EdGraphPin.h"
#include "K2Node_AddPinInterface.h"
#include "K2Node_TransformNDisFunc.generated.h"

UCLASS()
class NDISPLAYEVENTSENDEREDITOR_API UK2Node_TransformNDisFunc : public UK2Node,public IK2Node_AddPinInterface
{
	GENERATED_BODY()
	//UEdGraphNode Interface
	virtual FText GetTooltipText() const override;
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual FText GetKeywords() const override { return FText::FromString(TEXT("NDisplay,NDis,NDisEvent,NDisplayEvent,NDisFunc,Func,Exe")); }
	//End

	//UK2Node Interface
	virtual FText GetMenuCategory() const override;
	virtual void GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const override;
	virtual void GetNodeContextMenuActions(UToolMenu* Menu, UGraphNodeContextMenuContext* Context) const override;
	virtual void EarlyValidation(class FCompilerResultsLog& MessageLog) const;


	virtual void AllocateDefaultPins() override;
	virtual void ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph) override;
	virtual void PostReconstructNode() override;
	virtual void NotifyPinConnectionListChanged(UEdGraphPin* Pin) override;
	void CheckNodeSuccessed() const;

	virtual void AddInputPin() override;

#if ENGINE_MAJOR_VERSION <= 4 || (ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION < 1)
	virtual void RemoveInputPin(UEdGraphPin* Pin);
	virtual UEdGraphPin* GetThenPin() const;
#else
	virtual void RemoveInputPin(UEdGraphPin* Pin) override;
#endif

	virtual bool CanRemovePin(const UEdGraphPin* Pin) const { return true; };

	void ResetPinTypeToWildcard(UEdGraphPin* Pin);

	virtual FLinearColor GetNodeTitleColor() const
	{
		return FColor::Red;
	}
	virtual FLinearColor GetNodeBodyTintColor() const
	{
		return FColor::Yellow;
	}

	virtual TSharedPtr<SWidget> CreateNodeImage() const override;

	virtual bool ShowPaletteIconOnNode() const { return true; }

	FSlateIcon GetIconAndTint(FLinearColor& OutColor) const override;

	void SyncPinNames();
	UPROPERTY()
	TArray<FName> FunParamPins;
	UPROPERTY()
	int32 PinNum = 0;
	
};
