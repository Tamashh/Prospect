#include "YInventoryAmmoFunctions.h"

UYInventoryAmmoFunctions::UYInventoryAmmoFunctions() {
}

bool UYInventoryAmmoFunctions::TryGetAmmoDataFromInventoryItem(AActor* actorContext, const FYInventoryItem& inventoryItem, FYUIWeaponAmmoData& uiWeaponAmmoData) {
    return false;
}

FName UYInventoryAmmoFunctions::GetAmmoTypeFromSlot(AActor* actorContext, EYPlayerSetType Slot) {
    return NAME_None;
}

FDataTableRowHandle UYInventoryAmmoFunctions::GetAmmoRowByWeaponID(UObject* WorldContextObject, FName RowName) {
    return FDataTableRowHandle{};
}

FName UYInventoryAmmoFunctions::GetAmmoIDFromWeaponRow(const FDataTableRowHandle& rowHandle) {
    return NAME_None;
}

bool UYInventoryAmmoFunctions::GetAmmoDatatableRowHandleFromWeaponRowHandle(const FDataTableRowHandle& rowHandle, FDataTableRowHandle& outAmmoRowHandle) {
    return false;
}

bool UYInventoryAmmoFunctions::GetAmmoDataFromId(UObject* objectContext, const FString& ID, FYAmmoTypeDataTableRow& outRowData) {
    return false;
}

bool UYInventoryAmmoFunctions::GetAmmoDataFromDataTableRow(FDataTableRowHandle rowHandle, FYAmmoTypeDataTableRow& outRowData) {
    return false;
}

bool UYInventoryAmmoFunctions::CalculateAmountOfAmmoTypeInInventoryContext(AActor* actorContext, const FName& ammoId, int32& totalAmmoOfTypeInBag, EYInventoryPlace inventoryPlace) {
    return false;
}


