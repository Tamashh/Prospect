#pragma once
#include "CoreMinimal.h"
#include "YCustomItemInfo.h"
#include "YOnLoadoutPresetReceivedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnLoadoutPresetReceived, const FString&, UserId, const TArray<FYCustomItemInfo>&, purchasedItems);
