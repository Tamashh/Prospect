#pragma once
#include "CoreMinimal.h"
#include "EYClaimCouponCodeStatus.generated.h"

UENUM(BlueprintType)
enum class EYClaimCouponCodeStatus : uint8 {
    Invalid,
    Success,
    InvalidCode,
    AlreadyRedeemed,
    CampaignAlreadyRedeemed,
    Revoked,
    NotValidTooSoon,
    NotValidTooLate,
    ServerError,
    FeatureDisabled,
    NoContent,
};
