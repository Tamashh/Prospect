#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YWeaponModCombinationWithDamage.generated.h"

USTRUCT(BlueprintType)
struct FYWeaponModCombinationWithDamage : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_weaponName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_modCombinations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_targetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_damageDealt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_distanceToTarget;
    
    PROSPECT_API FYWeaponModCombinationWithDamage();
};

