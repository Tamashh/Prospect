#pragma once
#include "CoreMinimal.h"
#include "YCustomItemInfo.h"
#include "YOnTwitchDropCustomItemsUpdatedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnTwitchDropCustomItemsUpdatedSignature, const FString&, UserId, const TArray<FYCustomItemInfo>&, itemAmountChanged);

