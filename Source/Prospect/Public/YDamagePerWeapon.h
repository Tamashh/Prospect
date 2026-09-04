#pragma once
#include "CoreMinimal.h"
#include "YDamagePerWeapon.generated.h"

USTRUCT(BlueprintType)
struct FYDamagePerWeapon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_weaponId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_damageAggregate;
    
    PROSPECT_API FYDamagePerWeapon();
};

