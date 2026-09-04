#pragma once
#include "CoreMinimal.h"
#include "EYWeaponSlotType.h"
#include "YWeaponSwitchTriggerData.generated.h"

USTRUCT(BlueprintType)
struct FYWeaponSwitchTriggerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYWeaponSlotType m_weaponSlotType;
    
    PROSPECT_API FYWeaponSwitchTriggerData();
};

