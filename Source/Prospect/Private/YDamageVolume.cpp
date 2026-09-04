#include "YDamageVolume.h"
#include "YDamageComponent.h"

AYDamageVolume::AYDamageVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->YDamage = CreateDefaultSubobject<UYDamageComponent>(TEXT("YDamage"));
    this->DamageAmount = 10000.0f;
}


