#pragma once
#include "CoreMinimal.h"
#include "YShopItem.h"
#include "OnItemClaimedReceivedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemClaimedReceivedSignature, const FYShopItem&, shopItem, const int32, purchaseAmount);

