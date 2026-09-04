#pragma once
#include "CoreMinimal.h"
#include "YTechTreeNodeStatus.h"
#include "YWidget.h"
#include "YNodesCreatedDelegate.h"
#include "YResourceExecutionInterface.h"
#include "YTechTreeNodeType.h"
#include "YWidget_TechTreeColumn.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PROSPECT_API UYWidget_TechTreeColumn : public UYWidget, public IYResourceExecutionInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FYTechTreeNodeType> m_nodeUiData;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYNodesCreated OnNodesCreated;
    
    UYWidget_TechTreeColumn();

private:
    UFUNCTION(BlueprintCallable)
    void OnTechTreeNodePurchaseFailure(const FString& UserId);
    
    UFUNCTION(BlueprintCallable)
    void OnTechTreeDataUpdated(const FString& ID, const TArray<FYTechTreeNodeStatus>& playerTechTreeData, const int32& remainingTimeInSeconds);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CreateTechtreeNodes(const TArray<FYTechTreeNodeType>& nodes, const int32 amountOfNodes);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnTechTreeProgressDataUpdated(const TArray<FYTechTreeNodeStatus>& playerTechTreeData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnTechTreeNodePurchaseFailure();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPlayerQuartersLevelPurchaseFailure();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPassiveGeneratorCrateResultsReceived(const FString& sourceGeneratorId, const TMap<FString, int32>& itemsReceived);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget* BP_CreateTechtreeNode(const FYTechTreeNodeType& nodeData);
    

    // Fix for true pure virtual functions not being implemented
};

