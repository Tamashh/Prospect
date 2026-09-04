#include "YCharacterCustomizationExplicitCustomizationActor.h"

AYCharacterCustomizationExplicitCustomizationActor::AYCharacterCustomizationExplicitCustomizationActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_registerCustomizationModeAssociation = true;
}

void AYCharacterCustomizationExplicitCustomizationActor::OnCharacterCustomizationLoadedCallback() {
}



