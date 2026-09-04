#include "YWeaponFunctionLibrary.h"

UYWeaponFunctionLibrary::UYWeaponFunctionLibrary() {
}

FString UYWeaponFunctionLibrary::ToDebugString(const FYDealtDamageData& Data) {
    return TEXT("");
}

bool UYWeaponFunctionLibrary::IsValidTarget(AActor* TargetActor) {
    return false;
}

bool UYWeaponFunctionLibrary::IsItemTypeWeapon(const EYItemType ItemType) {
    return false;
}

bool UYWeaponFunctionLibrary::IsDamageable(const AActor* TargetActor, bool considerDmgFromAI, bool considerDmgFromTurrets) {
    return false;
}

bool UYWeaponFunctionLibrary::HasPlayerWeaponEquipped(AActor* playerContextActor, const FDataTableRowHandle& weaponRowHandle) {
    return false;
}

float UYWeaponFunctionLibrary::GetFloatLimits(EYLimitType Type) {
    return 0.0f;
}

void UYWeaponFunctionLibrary::GetActorsInRadius(AActor* Instigator, float Radius, UClass* TargetClass, TArray<AActor*>& foundActors, bool sortedByDistance, bool excludeInstigator, bool DrawDebugSphere) {
}

FName UYWeaponFunctionLibrary::FindWeaponSecondaryAttachementSocketName(FDataTableRowHandle baseRowHandle) {
    return NAME_None;
}

void UYWeaponFunctionLibrary::FindSuitableModsForItemForSlot(UObject* objectContext, FDataTableRowHandle weaponRow, EYModificationSlotType Type, TArray<FName>& outModRowNames) {
}

bool UYWeaponFunctionLibrary::FindStoredWeaponInformationFromSlot(UObject* relevantContext, int32 Index, FYStoredInventoryWeaponData& outData) {
    return false;
}

USoundBase* UYWeaponFunctionLibrary::FindReloadSound(UActorComponent* playerRelevantComponent, int32 reloadSoundIndex) {
    return NULL;
}

UYWeaponPlayerControllerRuntimeComponent* UYWeaponFunctionLibrary::FindPlayerControllerWeaponRuntimeComponent(UObject* playerContext) {
    return NULL;
}

UYPlayerCharacterWeaponComponent* UYWeaponFunctionLibrary::FindPlayerCharacterWeaponComponent(UObject* playerContext) {
    return NULL;
}

UYPersistentWeaponDataComponent* UYWeaponFunctionLibrary::FindPersistentWeaponDataComponent(UObject* playerContext) {
    return NULL;
}

int32 UYWeaponFunctionLibrary::FindAmmoInClipFromRow(AActor* actorContext, const FDataTableRowHandle& weaponRowHandle) {
    return 0;
}

int32 UYWeaponFunctionLibrary::FindAmmoInClipFromInventoryItem(AActor* actorContext, const FYInventoryItem& inventoryItem) {
    return 0;
}

bool UYWeaponFunctionLibrary::FindActiveWeaponStoredInformation(AActor* actorContext, FYStoredInventoryWeaponData& outStoredData) {
    return false;
}

bool UYWeaponFunctionLibrary::FindActiveWeaponInventoryItem(AActor* actorContext, FYInventoryItem& OutItem) {
    return false;
}

FYActiveWeaponCharacterInitializationData UYWeaponFunctionLibrary::CreateCharacterInitializationDataFromStoredData(const FYStoredInventoryWeaponData& inData) {
    return FYActiveWeaponCharacterInitializationData{};
}


