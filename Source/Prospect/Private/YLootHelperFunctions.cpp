#include "YLootHelperFunctions.h"

UYLootHelperFunctions::UYLootHelperFunctions() {
}

FString UYLootHelperFunctions::ToDebugString(const FYLootItemAmount& itemAmount) {
    return TEXT("");
}

FString UYLootHelperFunctions::ToCompactDebugString(const FYInventoryItem& inventoryItem) {
    return TEXT("");
}

void UYLootHelperFunctions::SetDefaultLootItemMembers(FYInventoryItem& inventoryItem, const TArray<FDataTableRowHandle>& modsToAdd) {
}

FYLootItemAmount UYLootHelperFunctions::RollOnLootRow(const UObject* contextObject, FDataTableRowHandle rowHandle, const FRandomStream& RandomStream) {
    return FYLootItemAmount{};
}

TArray<FYLootItemAmount> UYLootHelperFunctions::RollForLootItemsFromListRoll(const UObject* contextObject, FDataTableRowHandle rowHandle) {
    return TArray<FYLootItemAmount>();
}

TArray<FYLootItemAmount> UYLootHelperFunctions::RollForLootItems(const UObject* contextObject, FDataTableRowHandle rowHandle, int32 numRolls, int32 randomSeed) {
    return TArray<FYLootItemAmount>();
}

FYLootItemAmount UYLootHelperFunctions::GetHighestValueItem(TArray<FYLootItemAmount> itemsToCompare) {
    return FYLootItemAmount{};
}


