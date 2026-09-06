#include "YLoadoutPresetFunctionsLibrary.h"

UYLoadoutPresetFunctionsLibrary::UYLoadoutPresetFunctionsLibrary() {
}

void UYLoadoutPresetFunctionsLibrary::SaveLoadoutPreset(UObject* objectContext, int32 loadoutpresetIndex) {
}

void UYLoadoutPresetFunctionsLibrary::PurchaseMissingItemsForLoadoutPreset(UObject* objectContext, const int32 loadoutpresetIndex) {
}

void UYLoadoutPresetFunctionsLibrary::GetUIInvnetoryDataFromLoadoutPresetById(UObject* objectContext, int32 loadoutpresetIndex, FYUIInventoryData& uiInventoryData) {
}

void UYLoadoutPresetFunctionsLibrary::GetLoadoutPresetMissingItemData(UObject* objectContext, TMap<FString, int32>& outMissingItemData) {
}

bool UYLoadoutPresetFunctionsLibrary::DoesPlayerHaveAllItemsForLoadoutPreset(UObject* objectContext, int32 loadoutpresetIndex, TMap<FString, int32>& outMissingItemData) {
    return false;
}

TArray<FYCostEntryRow> UYLoadoutPresetFunctionsLibrary::CalculateLoadoutPresetCostForMissingItems(UObject* objectContext, TMap<FString, int32> missingItemData) {
    return TArray<FYCostEntryRow>();
}

bool UYLoadoutPresetFunctionsLibrary::ApplyItemsPreset(UObject* objectContext, int32 loadoutpresetIndex, bool useInventoryOverflowCheck) {
    return false;
}
