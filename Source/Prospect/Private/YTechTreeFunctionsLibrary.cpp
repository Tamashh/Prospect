#include "YTechTreeFunctionsLibrary.h"

UYTechTreeFunctionsLibrary::UYTechTreeFunctionsLibrary() {
}

bool UYTechTreeFunctionsLibrary::RequestTechTreeNodeUpgradePurchase(UObject* WorldContext, const FName& nodeId) {
    return false;
}

bool UYTechTreeFunctionsLibrary::RequestStartTechTreeNodeUpgrade(UObject* WorldContext, const FName& nodeId) {
    return false;
}

bool UYTechTreeFunctionsLibrary::RequestStartPlayerQuarterUpgrade(UObject* WorldContext) {
    return false;
}

bool UYTechTreeFunctionsLibrary::RequestSkipTechTreeNodeUpgrade(UObject* WorldContext, const FName& nodeId, bool useOptionalCosts) {
    return false;
}

bool UYTechTreeFunctionsLibrary::RequestSkipPlayerQuarterUpgrade(UObject* WorldContext, bool useOptionalCosts) {
    return false;
}

bool UYTechTreeFunctionsLibrary::RequestPlayerQuarterUpgradePurchase(UObject* WorldContext) {
    return false;
}

bool UYTechTreeFunctionsLibrary::IsTechtreeNodeUpgradeInProgress(const UObject* WorldContext, FYTechTreeNodeStatus& nodeInUpgradeProgress) {
    return false;
}

bool UYTechTreeFunctionsLibrary::IsTechTreeNodeUnlocked(UObject* WorldContext, const FName& nodeId, const FString& contextString) {
    return false;
}

bool UYTechTreeFunctionsLibrary::IsTechTreeCostCurrency(const FYCostEntryRow& cost) {
    return false;
}

bool UYTechTreeFunctionsLibrary::IsPlayerQuarterUpgradeInProgress(UObject* WorldContext, const FString& contextString) {
    return false;
}

bool UYTechTreeFunctionsLibrary::HasReachedMaxPlayerQuartersLevel(UObject* WorldContext) {
    return false;
}

bool UYTechTreeFunctionsLibrary::HasEnoughNodeUpgradesForPlayerQuartersNextLevelPurchase(UObject* WorldContext, const FString& contextString) {
    return false;
}

float UYTechTreeFunctionsLibrary::GetUserCumulativePerkEffectAmountForUserByUserId(const UObject* WorldContext, const FString& contextString, const FString& UserId, const EYTechTreeNodePerkType& perkType) {
    return 0.0f;
}

float UYTechTreeFunctionsLibrary::GetUserCumulativePerkEffectAmountForUser(const UObject* WorldContext, const FString& contextString, const EYTechTreeNodePerkType& perkType) {
    return 0.0f;
}

int32 UYTechTreeFunctionsLibrary::GetTotalTechTreeNodesUpgradesUnlockedAmountForCategory(const UObject* WorldContext, EYTechtreeCategoryType Category, const FString& contextString) {
    return 0;
}

int32 UYTechTreeFunctionsLibrary::GetTotalTechTreeNodesUpgradesUnlockedAmount(const UObject* WorldContext, const FString& contextString) {
    return 0;
}

int32 UYTechTreeFunctionsLibrary::GetTotalPlayerQuarterUpgradesAmount(const UObject* objectContext) {
    return 0;
}

FTimespan UYTechTreeFunctionsLibrary::GetTimespanUntilNextPlayerQuarterLevelClaimable(UObject* WorldContext, int32 playerQuarterLevel, const FString& contextString, bool& isInProgress) {
    return FTimespan{};
}

FTimespan UYTechTreeFunctionsLibrary::GetTimespanUntilNextNodeUpgradeClaimable(UObject* WorldContext, const FName& nodeId, const FString& contextString, bool& isInProgress) {
    return FTimespan{};
}

int32 UYTechTreeFunctionsLibrary::GetTechTreeNodeUserLevelByUserId(const UObject* WorldContext, const FName& nodeId, const FString& UserId) {
    return 0;
}

int32 UYTechTreeFunctionsLibrary::GetTechTreeNodeUserLevel(const UObject* WorldContext, const FName& nodeId) {
    return 0;
}

int32 UYTechTreeFunctionsLibrary::GetTechTreeNodesRequiredForPlayerQuarterLevel(const UObject* objectContext, int32 playerQuarterLevel, const FString& contextString) {
    return 0;
}

bool UYTechTreeFunctionsLibrary::GetTechTreeNodesForPlayerQuarterLevel(const UObject* objectContext, int32 Level, TArray<FYTechTreeNodeType>& outTechTreeNodes, const FString& contextString) {
    return false;
}

bool UYTechTreeFunctionsLibrary::GetTechTreeNodesForPerkType(const UObject* objectContext, const FString& contextString, const EYTechTreeNodePerkType& perkType, TArray<FYTechTreeNodeType>& outTechTreeNodes) {
    return false;
}

bool UYTechTreeFunctionsLibrary::GetTechTreeNodesByCategory(const UObject* WorldContext, const EYTechtreeCategoryType& techtreeCategory, TArray<FYTechTreeUIData>& techtreeUiData) {
    return false;
}

int32 UYTechTreeFunctionsLibrary::GetTechTreeNodeMaxLevel(const UObject* WorldContext, const FName& nodeId, const FString& contextString) {
    return 0;
}

bool UYTechTreeFunctionsLibrary::GetTechTreeNodeLevelUpgradeCost(const UObject* WorldContext, const FName& nodeId, const int32 Level, TArray<FYCostEntryRow>& outCosts, const FString& contextString) {
    return false;
}

bool UYTechTreeFunctionsLibrary::GetTechTreeNodeLevelSkipTimerCost(UObject* WorldContext, const FName& nodeId, const int32 Level, TArray<FYCostEntryRow>& outCosts, TArray<FYCostEntryRow>& outOptionalCosts, const FString& contextString) {
    return false;
}

bool UYTechTreeFunctionsLibrary::GetTechTreeCategoryRowByCategory(const UObject* objectContext, const EYTechtreeCategoryType& Category, FYTechTreeCategory& outTechTreeCategoryRow, const FString& contextString) {
    return false;
}

int32 UYTechTreeFunctionsLibrary::GetPlayerQuartersUserLevel(UObject* WorldContext) {
    return 0;
}

bool UYTechTreeFunctionsLibrary::GetPlayerQuarterLevelSkipTimerCost(UObject* WorldContext, const int32 Level, TArray<FYCostEntryRow>& outCosts, TArray<FYCostEntryRow>& outOptionalCosts, const FString& contextString) {
    return false;
}

int32 UYTechTreeFunctionsLibrary::GetMaxTechTreeNodesUpgradesForCategory(const UObject* WorldContext, EYTechtreeCategoryType Category, const FString& contextString) {
    return 0;
}

bool UYTechTreeFunctionsLibrary::GetAllTechTreeNodesByCategory(const UObject* objectContext, EYTechtreeCategoryType Category, TArray<FYTechTreeNodeType>& outFilteredTechTreeNodes, const FString& contextString) {
    return false;
}

bool UYTechTreeFunctionsLibrary::GetAllTechTreeNodeRows(const UObject* objectContext, TArray<FYTechTreeNodeType>& outTechTreeNodeRows, const FString& contextString) {
    return false;
}

bool UYTechTreeFunctionsLibrary::GetAllTechTreeCategoryRows(const UObject* objectContext, TArray<FYTechTreeCategory>& outTechTreeNodeRows, const FString& contextString) {
    return false;
}

bool UYTechTreeFunctionsLibrary::GetAllPlayerQuarterUpgradeRows(const UObject* objectContext, TArray<FYPlayerQuarterUpgradeType>& outPlayerQuarterUpgradeRows, const FString& contextString) {
    return false;
}

bool UYTechTreeFunctionsLibrary::FindTechTreeNodeRowHandle(const UObject* objectContext, const FName& rowId, FDataTableRowHandle& outRowHandle, const FString& contextString) {
    return false;
}

bool UYTechTreeFunctionsLibrary::FindTechTreeNodeRow(const UObject* objectContext, const FString& callerContext, const FName& rowId, FYTechTreeNodeType& outTechTreeNodeRow) {
    return false;
}

bool UYTechTreeFunctionsLibrary::FindPlayerQuarterUpgradeRowByLevel(const UObject* objectContext, int32 Level, FYPlayerQuarterUpgradeType& outPlayerQuarterUpgradeRow, const FString& contextString) {
    return false;
}

bool UYTechTreeFunctionsLibrary::FindPlayerQuarterUpgradeRow(const UObject* objectContext, const FName& rowId, FYPlayerQuarterUpgradeType& outPlayerQuarterUpgradeRow, const FString& contextString) {
    return false;
}

bool UYTechTreeFunctionsLibrary::CanAffordTechTreeNodeNextUpgradePurchase(UObject* WorldContext, const FName& nodeId, const FString& contextString) {
    return false;
}

bool UYTechTreeFunctionsLibrary::CanAffordTechTreeCostsSet(UObject* WorldContext, const TArray<FYCostEntryRow>& costs) {
    return false;
}

bool UYTechTreeFunctionsLibrary::AreUnlockDependenciesSatisfiedForTechTreeNode(UObject* WorldContext, const FName& nodeId, const FString& contextString) {
    return false;
}


