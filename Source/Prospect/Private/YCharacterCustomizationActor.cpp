#include "YCharacterCustomizationActor.h"
#include "YCameraInteractionComponent.h"
#include "YCustomizationCameraComponent.h"

AYCharacterCustomizationActor::AYCharacterCustomizationActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShouldNeverSeamlessTravel = true;
    this->m_interactionComponent = CreateDefaultSubobject<UYCameraInteractionComponent>(TEXT("interactionComponent"));
    this->m_customizationCameraComponent = CreateDefaultSubobject<UYCustomizationCameraComponent>(TEXT("CustomizationCameraComponent"));
    this->m_clearMaterial = true;
    this->m_reactToGLobalVanityUpdates = false;
    this->m_attachToLocalPlayerAtStart = true;
    this->m_useMeshMerging = false;
    this->m_shouldSkelMeshComponentsSyncAttachParrentLOD = false;
    this->m_usingParentMeshForAttachments = false;
    this->m_explicitCustomizationActor = NULL;
    this->m_playerCharacterCustomizationActor = NULL;
    this->m_bindToPlayerStateData = true;
}

void AYCharacterCustomizationActor::SetPlayerStateData(APlayerState* playerStateData) {
}

void AYCharacterCustomizationActor::SetCategoryVisualized(EYCustomizationCategory Category) {
}

void AYCharacterCustomizationActor::RefreshActiveCustomizationData(FYActiveCustomizationData oldData, FYActiveCustomizationData customizationData, bool ForceRefresh) {
}

void AYCharacterCustomizationActor::OnWorldLocationChanged(FTransform worldOffsetLocation) {
}


void AYCharacterCustomizationActor::OnInitializeEquippedWeapon(FDataTableRowHandle desiredRowHandle, TArray<FDataTableRowHandle> vanityEntries) {
}

void AYCharacterCustomizationActor::OnGlobalVanityUpdated() {
}

void AYCharacterCustomizationActor::OnFinishedAsyncLoading(FYCharacterCustomizationBodyPart bodyPart) {
}

void AYCharacterCustomizationActor::OnCategoryClickedCallback(EYCustomizationCategory Category) const {
}

void AYCharacterCustomizationActor::LogDebugSelfInfo(const FString& Context) const {
}

void AYCharacterCustomizationActor::HandlePlayerStateSet() {
}











