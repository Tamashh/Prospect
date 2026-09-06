#pragma once
#include "CoreMinimal.h"
#include "EYGenericClaimableOrigin.generated.h"

UENUM(BlueprintType)
enum class EYGenericClaimableOrigin : uint8 {
    None,
    Debug,
    Coupons,
    GenericClaimableData,
    OneTimeItemGrants,
    EntitlementEGS,
    EntitlementSteam,
};
