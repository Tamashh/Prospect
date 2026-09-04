#pragma once
#include "CoreMinimal.h"
#include "EYVFX_WeaponType.h"
#include "YWeaponParticleSystemOverrideByWeaponType.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FYWeaponParticleSystemOverrideByWeaponType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYVFX_WeaponType m_weaponType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_particleSystem;
    
    PROSPECT_API FYWeaponParticleSystemOverrideByWeaponType();
};

