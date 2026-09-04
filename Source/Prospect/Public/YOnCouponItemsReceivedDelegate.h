#pragma once
#include "CoreMinimal.h"
#include "YCurrencyItem.h"
#include "Engine/DataTable.h"
#include "YInventoryItem.h"
#include "YOnCouponItemsReceivedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FYOnCouponItemsReceived, const bool, success, const TArray<FYInventoryItem>&, receivedItems, const TArray<FYCurrencyItem>&, receivedCurrencies, const TArray<FDataTableRowHandle>&, itemRows);

