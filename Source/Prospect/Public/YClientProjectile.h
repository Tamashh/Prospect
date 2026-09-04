#pragma once
#include "CoreMinimal.h"
#include "YProjectile.h"
#include "YClientProjectile.generated.h"

UCLASS(Blueprintable)
class AYClientProjectile : public AYProjectile {
    GENERATED_BODY()
public:
    AYClientProjectile(const FObjectInitializer& ObjectInitializer);

};

