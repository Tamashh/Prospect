#include "YWeaponVisualizationFunctionLibrary.h"

UYWeaponVisualizationFunctionLibrary::UYWeaponVisualizationFunctionLibrary() {
}

void UYWeaponVisualizationFunctionLibrary::GetAllModAttachEntries(const FDataTableRowHandle& weaponRowHandle, const FYStoredModData& modData, TArray<FYModAttachmentInfo>& outAllModAttachEntries) {
}

void UYWeaponVisualizationFunctionLibrary::DetermineAssetsToLoad(const UObject* objectContext, const FYActiveWeaponCharacterInitializationData& Data, TArray<FSoftObjectPath>& outPaths) {
}

void UYWeaponVisualizationFunctionLibrary::DebugSyncLoadWeaponVanityAndApplyVisuals(const UObject* objectContext, const FYActiveWeaponCharacterInitializationData& Data, UYSkeletalMeshComponentFOV* skelMeshComponent) {
}

void UYWeaponVisualizationFunctionLibrary::ConvertRowHandleToWeaponDataTableBase(const UObject* objectContext, const FDataTableRowHandle weaponRowHandle, TArray<FSoftObjectPath>& outPaths) {
}

void UYWeaponVisualizationFunctionLibrary::ApplyWeaponVisuals(const FYActiveWeaponCharacterInitializationData& Data, UYSkeletalMeshComponentFOV* skelMeshComponent, bool setupForFirstPerson, bool showCharm) {
}

void UYWeaponVisualizationFunctionLibrary::ApplyWeaponMainMeshVisual(USkeletalMeshComponent* skelMeshComponent, const FYWeaponVanityRow& weaponVanityRow) {
}

void UYWeaponVisualizationFunctionLibrary::ApplyWeaponAttachmentMeshVisuals(USkeletalMeshComponent* skelMeshComponent, const FYWeaponVanityRow& weaponVanityRow, const FName AttachmentSocketName) {
}

void UYWeaponVisualizationFunctionLibrary::ApplyModVisuals(UYSkeletalMeshComponentFOV* skelMeshComponent, const FDataTableRowHandle& weaponRowHandle, const FYStoredModData& modData, const FYWeaponVanityRow& weaponVanityRow) {
}

void UYWeaponVisualizationFunctionLibrary::ApplyMeleeWeaponVisuals(const FYActiveWeaponCharacterInitializationData& Data, UYSkeletalMeshComponentFOV* skelMeshComponent, bool setupForFirstPerson) {
}


