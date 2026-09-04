#include "YCharacterCustomizationPreviewActor.h"

AYCharacterCustomizationPreviewActor::AYCharacterCustomizationPreviewActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_bindToPlayerStateData = false;
    this->m_relevantCameraActor = NULL;
    this->m_usedExplicitModel = false;
    this->m_model = NULL;
    this->m_globalVanity = NULL;
}

void AYCharacterCustomizationPreviewActor::OnTypeSet(EYCustomizationModelType Type) {
}

void AYCharacterCustomizationPreviewActor::OnGlobalVanityUpdatedModel() {
}



