#include "YGPAComponentTestActor.h"
#include "YGameplayAttributesComponent.h"

AYGPAComponentTestActor::AYGPAComponentTestActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_gameplayAttributesComponent = CreateDefaultSubobject<UYGameplayAttributesComponent>(TEXT("GameplayAttributesComponent"));
}


