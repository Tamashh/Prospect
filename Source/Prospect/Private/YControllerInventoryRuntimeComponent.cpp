#include "YControllerInventoryRuntimeComponent.h"

UYControllerInventoryRuntimeComponent::UYControllerInventoryRuntimeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_cachedDropComponent = NULL;
}

bool UYControllerInventoryRuntimeComponent::TryRemoveItem(const int32 targetInventoryComponentId, const FYInventoryItem& itemToRemove, const int32 amountToRemove) {
    return false;
}

void UYControllerInventoryRuntimeComponent::TryRemoveAttachmentFromWeapon(const int32 weaponInventoryComponentId, const int32 targetInventoryComponentId, const FString& weaponItemId, const FString& modItemId, EYPlayerSetType targetSetType, bool dropAttachment, const FString& newlyGeneratedGUID) {
}

void UYControllerInventoryRuntimeComponent::TryRemoveAllAttachmentsFromWeapon(const int32 weaponInventoryComponentId, const int32 targetInventoryComponentId, const FString& weaponItemId) {
}

bool UYControllerInventoryRuntimeComponent::TryMoveItem(const int32 targetInventoryComponentId, const int32 originInventoryComponentId, const FYInventoryItem& itemToMove, int32 amountToMove, EYPlayerSetType newSetType, bool ignoreStacking, const FString& newlyGeneratedGUID) {
    return false;
}

void UYControllerInventoryRuntimeComponent::TryMoveAttachmentFromWeaponToWeapon(const int32 sourceWeaponInventoryComponentId, const FString& sourceWeaponItemId, const int32 targetWeaponInventoryComponentId, const FString& targetWeaponItemId, const FString& modItemId, const FString& newlyGeneratedGUID) {
}

bool UYControllerInventoryRuntimeComponent::TryDropItemAmount(const FYInventoryItem& itemToDrop, int32 amountToRemove, int32 inventoryComponentId) {
    return false;
}

bool UYControllerInventoryRuntimeComponent::TryDropItem(const FYInventoryItem& itemToDrop, int32 inventoryComponentId) {
    return false;
}

bool UYControllerInventoryRuntimeComponent::TryAddVanityToWeapon(const int32 weaponInventoryComponentId, const FString& weaponItemId, const TArray<FDataTableRowHandle>& vanityIds) {
    return false;
}

bool UYControllerInventoryRuntimeComponent::TryAddItem(const int32 targetInventoryComponentId, const FYInventoryItem& itemToAdd, const int32 amountToAdd, EYPlayerSetType targetSetType, EYPlayerSetType originSetType, bool ignoreStacking, const FString& newlyGeneratedGUID) {
    return false;
}

void UYControllerInventoryRuntimeComponent::TryAddAttachmentToWeapon(const int32 weaponInventoryComponentId, const int32 modInventoryComponentId, const FString& weaponItemId, const FString& modItemId, const FString& newlyGeneratedGUID) {
}

void UYControllerInventoryRuntimeComponent::ServerTryRemoveItem_Implementation(const int32 targetInventoryComponentId, const FString& ItemInstanceId, const int32 amountToRemove) {
}

void UYControllerInventoryRuntimeComponent::ServerTryMoveItem_Implementation(const int32 targetInventoryComponentId, const int32 originInventoryComponentId, const FString& ItemInstanceId, const int32 amountToMove, EYPlayerSetType newSetType, bool ignoreStacking, const FString& newlyGeneratedGUID) {
}

void UYControllerInventoryRuntimeComponent::ServerTryMoveAttachmentFromWeaponToWeapon_Implementation(const int32 sourceWeaponInventoryComponentId, const FString& sourceWeaponItemId, const int32 targetWeaponInventoryComponentId, const FString& targetWeaponItemId, const FString& modItemId, const FString& newlyGeneratedGUID) {
}

void UYControllerInventoryRuntimeComponent::ServerRemoveAttachmentFromWeapon_Implementation(const int32 weaponInventoryComponentId, const int32 targetInventoryComponentId, const FString& weaponItemId, const FString& modItemId, EYPlayerSetType targetSetType, bool dropAttachment, const FString& newlyGeneratedGUID) {
}

void UYControllerInventoryRuntimeComponent::ServerRemoveAllAttachmentsFromWeapon_Implementation(const int32 weaponInventoryComponentId, const int32 targetInventoryComponentId, const FString& weaponItemId) {
}

void UYControllerInventoryRuntimeComponent::ServerForceEquipItem_Implementation(const int32 targetInventoryComponentId, const int32 originInventoryComponentId, const FString& ItemInstanceId, const int32 amountToMove, const FString& newlyGeneratedGUID) {
}

void UYControllerInventoryRuntimeComponent::ServerDropItemAmount_Implementation(int32 inventoryComponentId, const FString& ItemInstanceId, int32 amountToDrop) {
}

void UYControllerInventoryRuntimeComponent::ServerAddAttachmentToWeapon_Implementation(const int32 weaponInventoryComponentId, const int32 modInventoryComponentId, const FString& weaponItemId, const FString& modItemId, const FString& newlyGeneratedGUID) {
}

UYStateInventoryComponent* UYControllerInventoryRuntimeComponent::ResolveStateInventoryComponentForId(int32 componentId, const FString& callerContext) const {
    return NULL;
}

void UYControllerInventoryRuntimeComponent::OnAbilityConsumed(const AActor* Owner, const FYInventoryItem& inventoryItem) {
}

void UYControllerInventoryRuntimeComponent::Initialize() {
}

bool UYControllerInventoryRuntimeComponent::ForceEquipItem(const int32 targetInventoryComponentId, const int32 originInventoryComponentId, const FYInventoryItem& itemToMove, const int32 amountToMove, const FString& newlyGeneratedGUID) {
    return false;
}

UYControllerInventoryRuntimeComponent* UYControllerInventoryRuntimeComponent::FindControllerInventoryRuntimeComponent(UObject* WorldContext) {
    return NULL;
}

void UYControllerInventoryRuntimeComponent::ClientNotifyWeightUpdated_Implementation(float newWeight) {
}

void UYControllerInventoryRuntimeComponent::ClientNotifyInventoryFull_Implementation() {
}


