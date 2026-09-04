#pragma once
#include "CoreMinimal.h"
#include "EYPurchaseOfferResult.generated.h"

UENUM(BlueprintType)
enum class EYPurchaseOfferResult : uint8 {
    OK,
    INVALID_ID,
    ALREADY_PURCHASED,
    OFFER_NOT_ACTIVE,
    NOT_ENOUGH_CURRENCY,
    INVALID_CURRENCY_TYPE,
    INVALID_AMOUNT,
    UNKNOWN_ERROR,
};

