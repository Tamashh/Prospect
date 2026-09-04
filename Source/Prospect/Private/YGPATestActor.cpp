#include "YGPATestActor.h"
#include "YGPATestComponent.h"
#include "YGameplayAttributesComponent.h"

AYGPATestActor::AYGPATestActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_gameplayAttributesComponent = CreateDefaultSubobject<UYGameplayAttributesComponent>(TEXT("GameplayAttributesComponent"));
    this->m_gpaTestComponent = CreateDefaultSubobject<UYGPATestComponent>(TEXT("GPATestComponent"));
    this->m_floatAttribute = 123.449997f;
    this->m_intAttribute = 12345;
}


