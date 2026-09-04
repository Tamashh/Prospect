#include "YHealthTestActor.h"
#include "YDamageComponent.h"
#include "YHealthComponent.h"

AYHealthTestActor::AYHealthTestActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_healthComponent = CreateDefaultSubobject<UYHealthComponent>(TEXT("healthComponent"));
    this->m_damageableComponent = CreateDefaultSubobject<UYDamageComponent>(TEXT("DamageableComponent"));
}


