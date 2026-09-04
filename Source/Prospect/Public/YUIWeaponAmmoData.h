#pragma once
#include "CoreMinimal.h"
#include "YUIWeaponAmmoData.generated.h"

USTRUCT(BlueprintType)
struct FYUIWeaponAmmoData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_weaponMagazineSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_totalAmmoCompatibleWithWeaponInBag;
    
    PROSPECT_API FYUIWeaponAmmoData();
};

