#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "YWeaponDecalData.h"
#include "YDamageDecalSpawnComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYDamageDecalSpawnComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYDamageDecalSpawnComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SpawnDamageDecal(const FYWeaponDecalData& weaponDecalData, const FVector& impactLocation, const FVector& impactDirection);
    
};

