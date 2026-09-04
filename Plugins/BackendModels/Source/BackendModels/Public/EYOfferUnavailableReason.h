#pragma once
#include "CoreMinimal.h"
#include "EYOfferUnavailableReason.generated.h"

UENUM(BlueprintType)
enum class EYOfferUnavailableReason : uint8 {
    None,
    AlreadyPurchased,
    BeingPurchased,
    NotEnoughFunds,
    PurchasedSeasonPass,
    MaxSeasonLevel,
    OwningAllVanityItems,
    QuantityValueTooHigh,
    OtherOffersRequired,
    Unknown,
    MAX,
};

