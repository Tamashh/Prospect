#include "YModFunctions.h"

UYModFunctions::UYModFunctions() {
}

void UYModFunctions::RemoveAttachmentsFromWeapon(AActor* actorCtx, const FString& weaponItemId) {
}

bool UYModFunctions::RemoveAttachmentFromWeapon(AActor* actorContext, int32 inventoryId, const FString& weaponItemId, const FString& modId) {
    return false;
}

FText UYModFunctions::ModSlotTypeToText(const EYModificationSlotType modType) {
    return FText::GetEmpty();
}

bool UYModFunctions::ItemHasModSlots(UObject* objectContext, const FDataTableRowHandle& itemRowHandle) {
    return false;
}

bool UYModFunctions::IsModdableItem(UObject* objCtx, const FDataTableRowHandle& itemRowHandle) {
    return false;
}

bool UYModFunctions::IsModCompatibleWithWeapon(const FDataTableRowHandle& weaponRowHandle, const FDataTableRowHandle& modRowHandle) {
    return false;
}

float UYModFunctions::GetScopeOffset(AActor* actorCtx) {
    return 0.0f;
}

bool UYModFunctions::GetModFromItemId(AActor* actorContext, int32 inventoryId, const FString& ItemId, const FString& modId, FYModEntry& outMod) {
    return false;
}

bool UYModFunctions::GetModByType(AActor* actorCtx, EYModificationSlotType slotType, FYModEntry& foundMod) {
    return false;
}

TArray<FDataTableRowHandle> UYModFunctions::GetCompatibleWeaponsForMod(UObject* objectContext, const FDataTableRowHandle& modRowHandle) {
    return TArray<FDataTableRowHandle>();
}

TArray<FDataTableRowHandle> UYModFunctions::GetCompatibleModsForWeapon(const UObject* objectContext, const FDataTableRowHandle& weaponRowHandle, EYModificationSlotType optionalModSlotType) {
    return TArray<FDataTableRowHandle>();
}

EYModificationSlotType UYModFunctions::FindModTypeFromRow(const FDataTableRowHandle& row) {
    return EYModificationSlotType::None;
}

bool UYModFunctions::FindModSettingsForType(const UObject* objectContext, EYModificationSlotType Type, FYModSettingsEntry& outSettings) {
    return false;
}

EYItemRarityType UYModFunctions::FindModRarityFromRow(const FDataTableRowHandle& row) {
    return EYItemRarityType::Invalid;
}

bool UYModFunctions::FindItemStatsEntryFromModHandle(FDataTableRowHandle baseItemHandle, FDataTableRowHandle modRowHandle, float rollChance, EYItemRarityType rarity, TArray<FYStatsTypeDataEntry>& outEntries, APlayerController* PlayerController) {
    return false;
}

bool UYModFunctions::FindDetailedItemStatsFromModHandle(APlayerController* PlayerController, FDataTableRowHandle baseItemHandle, TArray<FDataTableRowHandle> modRowHandles, float rollChance, EYItemRarityType rarity, FYDetailedStatisticsDataSettingData& outData) {
    return false;
}

bool UYModFunctions::DoesItemHaveMods(const FYInventoryItem& Item) {
    return false;
}

FYStoredModData UYModFunctions::CalculateModsFromRarityToNewRarityByRow(const UObject* objCtx, const FDataTableRowHandle& itemRowHandle, EYItemRarityType toRarity) {
    return FYStoredModData{};
}

bool UYModFunctions::AddAttachmentToWeapon(AActor* actorContext, int32 weaponInventoryId, int32 modInventoryId, const FString& weaponItemId, const FYInventoryItem& modItem, const FString& newlyGeneratedGUID) {
    return false;
}


