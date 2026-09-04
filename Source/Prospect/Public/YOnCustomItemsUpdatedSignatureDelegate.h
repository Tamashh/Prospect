#pragma once
#include "CoreMinimal.h"
#include "YCustomItemInfo.h"
#include "YOnCustomItemsUpdatedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnCustomItemsUpdatedSignature, const FString&, UserId, const TArray<FYCustomItemInfo>&, itemAmountChanged);

