#pragma once
#include "CoreMinimal.h"
#include "YCustomItemInfo.h"
#include "YOnCustomItemsUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnCustomItemsUpdated, const FString&, UserId, const TArray<FYCustomItemInfo>&, itemAmountChanged);

