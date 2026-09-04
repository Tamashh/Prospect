#include "YSpotlightComponent.h"

UYSpotlightComponent::UYSpotlightComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->shadowCastDistance = 3000.0f;
    this->bCanEverCastShadow = true;
    this->bCanEverAffectTranslucency = true;
}


