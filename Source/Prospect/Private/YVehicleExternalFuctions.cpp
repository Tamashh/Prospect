#include "YVehicleExternalFuctions.h"

UYVehicleExternalFuctions::UYVehicleExternalFuctions() {
}

FYVehicleRowBase UYVehicleExternalFuctions::FindVehicleDataFromRowHandle(FDataTableRowHandle newRowHandle) {
    return FYVehicleRowBase{};
}

FDataTableRowHandle UYVehicleExternalFuctions::FindMovementSoundHandleFromVehicle(FYInventoryItem Item) {
    return FDataTableRowHandle{};
}

bool UYVehicleExternalFuctions::FindEquippedVehicleInventoryItem(AActor* relevantContext, FYInventoryItem& OutItem) {
    return false;
}

TSoftClassPtr<AYVehicle> UYVehicleExternalFuctions::FindDesiredVehicleClassFromInventoryItem(FYInventoryItem inventoryItem) {
    return NULL;
}

FDataTableRowHandle UYVehicleExternalFuctions::FindBoostSoundHandleFromVehicle(FYInventoryItem Item) {
    return FDataTableRowHandle{};
}


