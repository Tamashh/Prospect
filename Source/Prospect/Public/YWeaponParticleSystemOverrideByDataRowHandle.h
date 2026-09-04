#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YWeaponParticleSystemOverrideByDataRowHandle.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FYWeaponParticleSystemOverrideByDataRowHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_weaponDataTableRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_particleSystem;
    
    PROSPECT_API FYWeaponParticleSystemOverrideByDataRowHandle();
};

