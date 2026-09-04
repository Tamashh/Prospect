#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "YImpactData.h"
#include "YWeaponImpactEffectsAssociation.h"
#include "YImpactEffectsFunctions.generated.h"

class UAudioComponent;
class USceneComponent;

UCLASS(Blueprintable)
class UYImpactEffectsFunctions : public UObject {
    GENERATED_BODY()
public:
    UYImpactEffectsFunctions();

private:
    UFUNCTION(BlueprintCallable)
    static void SpawnImpactVFX(const FYImpactData& impactData, const FYWeaponImpactEffectsAssociation& impactEffect, FVector& outEffectSpawnLocation, const FString& contextString);
    
public:
    UFUNCTION(BlueprintCallable)
    static void SpawnImpactEffects(const FYImpactData& impactData);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UAudioComponent*> SpawnFootstepImpactEffectsAttached(const FYImpactData& impactData, USceneComponent* AttachComponent, FName Bone, bool playVFX);
    
};

