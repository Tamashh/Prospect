#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YPersistentWeaponDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYPersistentWeaponDataComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYPersistentWeaponDataComponent(const FObjectInitializer& ObjectInitializer);

};

