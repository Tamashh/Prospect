#include "YLootHelperFunctions.h"

UYLootHelperFunctions::UYLootHelperFunctions() {
}

FString UYLootHelperFunctions::ToDebugString(const FYLootItemAmount& itemAmount) {
    return TEXT("");
}

FString UYLootHelperFunctions::ToCompactDebugString(const FYInventoryItem& inventoryItem) {
    return TEXT("");
}

TArray<FYLootItemAmount> UYLootHelperFunctions::RollForLootItemsFromListRoll(UObject* contextObject, FDataTableRowHandle rowHandle) {
    return TArray<FYLootItemAmount>();
}

TArray<FYLootItemAmount> UYLootHelperFunctions::RollForLootItems(UObject* contextObject, FDataTableRowHandle rowHandle, int32 numRolls) {
    return TArray<FYLootItemAmount>();
}


