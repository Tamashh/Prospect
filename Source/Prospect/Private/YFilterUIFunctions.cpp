#include "YFilterUIFunctions.h"

UYFilterUIFunctions::UYFilterUIFunctions() {
}

bool UYFilterUIFunctions::UpdateFilterVanityItemsEntries(UObject* objCtx, const TArray<FYVanityItemData>& vanityItems, const FYFilterRuntimeSettings& Settings, TArray<FYFilterItemEntry>& outItemEntries) {
    return false;
}

bool UYFilterUIFunctions::FindRelevantDataTableRowFromFilterRuntimeData(UObject* objCtx, const FYFilterCategoriesDataEntry& categoriesEntry, const FYFilterRuntimeSettings& Settings, TArray<FYFilterItemEntry>& outItemEntries) {
    return false;
}

bool UYFilterUIFunctions::FindRelevantDataTableRowFromFilter(UObject* objCtx, const FYFilterCategoriesDataEntry& categoriesEntry, TArray<FYFilterItemEntry>& outItemData) {
    return false;
}


