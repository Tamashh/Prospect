#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YWeaponFireRegistryComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYWeaponFireRegistryComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYWeaponFireRegistryComponent(const FObjectInitializer& ObjectInitializer);

};

