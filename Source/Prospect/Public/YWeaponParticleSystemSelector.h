#pragma once
#include "CoreMinimal.h"
#include "YWeaponParticleSystemOverrideByDataRowHandle.h"
#include "YWeaponParticleSystemOverrideByWeaponType.h"
#include "YWeaponParticleSystemSelector.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FYWeaponParticleSystemSelector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_defaultPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYWeaponParticleSystemOverrideByWeaponType> m_overridePsByWeaponType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYWeaponParticleSystemOverrideByDataRowHandle> m_overridePsByDataRowHandle;
    
    PROSPECT_API FYWeaponParticleSystemSelector();
};

