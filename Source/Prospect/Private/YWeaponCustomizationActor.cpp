#include "YWeaponCustomizationActor.h"
#include "Components/SceneComponent.h"
#include "YCustomizationCameraComponent.h"
#include "YSkeletalMeshComponentFOV.h"

AYWeaponCustomizationActor::AYWeaponCustomizationActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->m_skeletalMeshComponentFOV = CreateDefaultSubobject<UYSkeletalMeshComponentFOV>(TEXT("WeaponSkeletalMeshComponentFOV"));
    this->m_rootComponent = (USceneComponent*)RootComponent;
    this->m_sceneBase = CreateDefaultSubobject<USceneComponent>(TEXT("ScenBaseComponent"));
    this->m_sceneRotationComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRotationComponent"));
    this->m_customizationCameraComponent = CreateDefaultSubobject<UYCustomizationCameraComponent>(TEXT("CustomizationCameraComponent"));
    this->m_CameraDataTable = NULL;
    this->m_charmSocketName = TEXT("WeaponCharm");
    this->m_currentVanityType = EYVanityType::Weapon;
    this->m_sceneBase->SetupAttachment(RootComponent);
    this->m_sceneRotationComponent->SetupAttachment(m_sceneBase);
    this->m_skeletalMeshComponentFOV->SetupAttachment(m_sceneRotationComponent);
}

UMaterialInstance* AYWeaponCustomizationActor::RetrieveMaterialWithOverrideParameters() const {
    return NULL;
}

void AYWeaponCustomizationActor::OverrideCurrentVanityDisplay(EYVanityType vanityType) {
}

void AYWeaponCustomizationActor::OnWorldLocationChanged(const FTransform& WorldLocation) {
}

void AYWeaponCustomizationActor::OnToggleQuickMenuVisibility(bool isQuickMenuVisible) {
}

void AYWeaponCustomizationActor::OnSelectedNewWeapon(const FString& weaponId, const FString& customWeaponID) {
}

void AYWeaponCustomizationActor::OnRequestTemporaryVisualizationUpdate(FDataTableRowHandle selectedVanityRowHandle, bool shouldShow, bool overrideOtherVanity) {
}

void AYWeaponCustomizationActor::OnInspectedInventoryItemUpdatedCallback(FYInventoryItem inventoryItem) {
}

void AYWeaponCustomizationActor::OnFinishedLoadingWeapon(FYCustomizationVisualizationState visualizationState) {
}

void AYWeaponCustomizationActor::OnFactionSet(const FName& factionId) {
}

void AYWeaponCustomizationActor::OnCustomizationModeChanged(EYCustomizationMode Mode) {
}




