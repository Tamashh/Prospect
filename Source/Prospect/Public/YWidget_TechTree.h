#pragma once
#include "CoreMinimal.h"
#include "YTechTreeNodeStatus.h"
#include "YWidget.h"
#include "YColumnsCreatedDelegate.h"
#include "YResourceExecutionInterface.h"
#include "YTechTreeUIData.h"
#include "YWidget_TechTree.generated.h"

class UYWidget_TechTreeColumn;

UCLASS(Blueprintable, EditInlineNew)
class PROSPECT_API UYWidget_TechTree : public UYWidget, public IYResourceExecutionInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FYTechTreeUIData> m_techtreeUiData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UYWidget_TechTreeColumn*> m_columns;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYColumnsCreated OnNodesCreated;
    
    UYWidget_TechTree();

protected:
    UFUNCTION(BlueprintCallable)
    void OnTechTreeNodesUpdated(const FString& UserId, const TArray<FYTechTreeNodeStatus>& techTreeNodes, const int32& remainingTimeInSeconds);
    
    UFUNCTION(BlueprintCallable)
    void NodesCreated();
    
    UFUNCTION(BlueprintCallable)
    void CreateTechtreeColumns(const TArray<FYTechTreeUIData>& columns);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_TechtreeNodeUpgraded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnTechTreeProgressDataUpdated(const TArray<FYTechTreeNodeStatus>& playerTechTreeData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnTechTreeNodePurchaseFailure();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPlayerQuartersLevelPurchaseFailure();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPlayerQuartersDataUpdated(const int32 playerQuartersLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPassiveGeneratorCrateResultsReceived(const FString& sourceGeneratorId, const TMap<FString, int32>& itemsReceived);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget_TechTreeColumn* BP_CreateTechtreeColumns(const FYTechTreeUIData& techtreeData);
    

    // Fix for true pure virtual functions not being implemented
};

