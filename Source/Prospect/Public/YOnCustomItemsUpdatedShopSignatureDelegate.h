#pragma once
#include "CoreMinimal.h"
#include "YCustomItemInfo.h"
#include "YOnCustomItemsUpdatedShopSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnCustomItemsUpdatedShopSignature, const FString&, UserId, const TArray<FYCustomItemInfo>&, itemAmountChanged);

