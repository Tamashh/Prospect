#pragma once
#include "CoreMinimal.h"
#include "EYPurchaseOfferState.generated.h"

UENUM(BlueprintType)
enum class EYPurchaseOfferState : uint8 {
    UNPURCHASED,
    BEING_PURCHASED,
    PURCHASED,
};

