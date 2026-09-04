#include "YExtractionActivationActor.h"
#include "YObjectInteractionComponent.h"

AYExtractionActivationActor::AYExtractionActivationActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_interactionComponent = CreateDefaultSubobject<UYObjectInteractionComponent>(TEXT("interactionComponent"));
    this->m_extractionActor = NULL;
}

void AYExtractionActivationActor::OnPlayerInteractionCompleted(EYInteractionType interactionType, AYPlayerController_Match* interactingPlayer) {
}

void AYExtractionActivationActor::OnExtractionActorStateChange(EYExtractionActorState State) {
}


