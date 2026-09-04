#pragma once
#include "CoreMinimal.h"
#include "YWeaponTooltipData.generated.h"

USTRUCT(BlueprintType)
struct FYWeaponTooltipData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_weaponDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_weaponMods;
    
    PROSPECT_API FYWeaponTooltipData();
};

