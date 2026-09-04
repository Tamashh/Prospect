#include "YPerkComponentTestActor.h"
#include "YDamageComponent.h"
#include "YPerkComponent.h"

AYPerkComponentTestActor::AYPerkComponentTestActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_perkComponent = CreateDefaultSubobject<UYPerkComponent>(TEXT("perkComponent"));
    this->m_damageComponent = CreateDefaultSubobject<UYDamageComponent>(TEXT("DamageComponent"));
}


