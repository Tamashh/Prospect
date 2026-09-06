#include "YControllerLoadoutPresetComponent.h"

UYControllerLoadoutPresetComponent::UYControllerLoadoutPresetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UYControllerLoadoutPresetComponent::TryUpdateInventory(const FOnInventoryBackendResponse& inDelegate) {
    return false;
}

void UYControllerLoadoutPresetComponent::OnLoadoutPresetPurchaseResponse(bool successful, int32 loadoutpresetIndex, EYPurchaseWeaponShopItemStatus responseStatus) {
}

void UYControllerLoadoutPresetComponent::Initialize() {
}

bool UYControllerLoadoutPresetComponent::GetItemMappingByCustomItemId(const FString& customItemID, FYLoadoutPresetUIItem& presetItem) {
    return false;
}
