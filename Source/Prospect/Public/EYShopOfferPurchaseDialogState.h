#pragma once
#include "CoreMinimal.h"
#include "EYShopOfferPurchaseDialogState.generated.h"

UENUM(BlueprintType)
enum class EYShopOfferPurchaseDialogState : uint8 {
    AskingForConfirmation,
    PurchasePending,
    PurchaseSuccessful,
    PurchaseFailed,
};

