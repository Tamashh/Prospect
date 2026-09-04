#pragma once
#include "CoreMinimal.h"
#include "YTechTreeNodeStatus.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "EYTechTreeNodePerkType.h"
#include "EYTechtreeCategoryType.h"
#include "YCostEntryRow.h"
#include "YPlayerQuarterUpgradeType.h"
#include "YTechTreeCategory.h"
#include "YTechTreeNodeType.h"
#include "YTechTreeUIData.h"
#include "YTechTreeFunctionsLibrary.generated.h"

UCLASS(Blueprintable)
class PROSPECT_API UYTechTreeFunctionsLibrary : public UObject {
    GENERATED_BODY()
public:
    UYTechTreeFunctionsLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool RequestTechTreeNodeUpgradePurchase(UObject* WorldContext, const FName& nodeId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool RequestStartTechTreeNodeUpgrade(UObject* WorldContext, const FName& nodeId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool RequestStartPlayerQuarterUpgrade(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool RequestSkipTechTreeNodeUpgrade(UObject* WorldContext, const FName& nodeId, bool useOptionalCosts);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool RequestSkipPlayerQuarterUpgrade(UObject* WorldContext, bool useOptionalCosts);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool RequestPlayerQuarterUpgradePurchase(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool IsTechtreeNodeUpgradeInProgress(const UObject* WorldContext, FYTechTreeNodeStatus& nodeInUpgradeProgress);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool IsTechTreeNodeUnlocked(UObject* WorldContext, const FName& nodeId, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static bool IsTechTreeCostCurrency(const FYCostEntryRow& cost);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool IsPlayerQuarterUpgradeInProgress(UObject* WorldContext, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool HasReachedMaxPlayerQuartersLevel(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool HasEnoughNodeUpgradesForPlayerQuartersNextLevelPurchase(UObject* WorldContext, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static float GetUserCumulativePerkEffectAmountForUserByUserId(const UObject* WorldContext, const FString& contextString, const FString& UserId, const EYTechTreeNodePerkType& perkType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static float GetUserCumulativePerkEffectAmountForUser(const UObject* WorldContext, const FString& contextString, const EYTechTreeNodePerkType& perkType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static int32 GetTotalTechTreeNodesUpgradesUnlockedAmountForCategory(const UObject* WorldContext, EYTechtreeCategoryType Category, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static int32 GetTotalTechTreeNodesUpgradesUnlockedAmount(const UObject* WorldContext, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetTotalPlayerQuarterUpgradesAmount(const UObject* objectContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static FTimespan GetTimespanUntilNextPlayerQuarterLevelClaimable(UObject* WorldContext, int32 playerQuarterLevel, const FString& contextString, bool& isInProgress);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static FTimespan GetTimespanUntilNextNodeUpgradeClaimable(UObject* WorldContext, const FName& nodeId, const FString& contextString, bool& isInProgress);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static int32 GetTechTreeNodeUserLevelByUserId(const UObject* WorldContext, const FName& nodeId, const FString& UserId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static int32 GetTechTreeNodeUserLevel(const UObject* WorldContext, const FName& nodeId);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetTechTreeNodesRequiredForPlayerQuarterLevel(const UObject* objectContext, int32 playerQuarterLevel, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static bool GetTechTreeNodesForPlayerQuarterLevel(const UObject* objectContext, int32 Level, TArray<FYTechTreeNodeType>& outTechTreeNodes, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static bool GetTechTreeNodesForPerkType(const UObject* objectContext, const FString& contextString, const EYTechTreeNodePerkType& perkType, TArray<FYTechTreeNodeType>& outTechTreeNodes);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool GetTechTreeNodesByCategory(const UObject* WorldContext, const EYTechtreeCategoryType& techtreeCategory, TArray<FYTechTreeUIData>& techtreeUiData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static int32 GetTechTreeNodeMaxLevel(const UObject* WorldContext, const FName& nodeId, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool GetTechTreeNodeLevelUpgradeCost(const UObject* WorldContext, const FName& nodeId, const int32 Level, TArray<FYCostEntryRow>& outCosts, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool GetTechTreeNodeLevelSkipTimerCost(UObject* WorldContext, const FName& nodeId, const int32 Level, TArray<FYCostEntryRow>& outCosts, TArray<FYCostEntryRow>& outOptionalCosts, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static bool GetTechTreeCategoryRowByCategory(const UObject* objectContext, const EYTechtreeCategoryType& Category, FYTechTreeCategory& outTechTreeCategoryRow, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static int32 GetPlayerQuartersUserLevel(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool GetPlayerQuarterLevelSkipTimerCost(UObject* WorldContext, const int32 Level, TArray<FYCostEntryRow>& outCosts, TArray<FYCostEntryRow>& outOptionalCosts, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static int32 GetMaxTechTreeNodesUpgradesForCategory(const UObject* WorldContext, EYTechtreeCategoryType Category, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAllTechTreeNodesByCategory(const UObject* objectContext, EYTechtreeCategoryType Category, TArray<FYTechTreeNodeType>& outFilteredTechTreeNodes, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAllTechTreeNodeRows(const UObject* objectContext, TArray<FYTechTreeNodeType>& outTechTreeNodeRows, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAllTechTreeCategoryRows(const UObject* objectContext, TArray<FYTechTreeCategory>& outTechTreeNodeRows, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAllPlayerQuarterUpgradeRows(const UObject* objectContext, TArray<FYPlayerQuarterUpgradeType>& outPlayerQuarterUpgradeRows, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static bool FindTechTreeNodeRowHandle(const UObject* objectContext, const FName& rowId, FDataTableRowHandle& outRowHandle, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static bool FindTechTreeNodeRow(const UObject* objectContext, const FString& callerContext, const FName& rowId, FYTechTreeNodeType& outTechTreeNodeRow);
    
    UFUNCTION(BlueprintCallable)
    static bool FindPlayerQuarterUpgradeRowByLevel(const UObject* objectContext, int32 Level, FYPlayerQuarterUpgradeType& outPlayerQuarterUpgradeRow, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static bool FindPlayerQuarterUpgradeRow(const UObject* objectContext, const FName& rowId, FYPlayerQuarterUpgradeType& outPlayerQuarterUpgradeRow, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool CanAffordTechTreeNodeNextUpgradePurchase(UObject* WorldContext, const FName& nodeId, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool CanAffordTechTreeCostsSet(UObject* WorldContext, const TArray<FYCostEntryRow>& costs);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool CanAffordPlayerQuartersNextLevelPurchase(UObject* WorldContext, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool AreUnlockDependenciesSatisfiedForTechTreeNode(UObject* WorldContext, const FName& nodeId, const FString& contextString);
    
};

