#pragma once
#include "CoreMinimal.h"
#include "YOnLoadoutPresetPurchaseItemsRemovedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnLoadoutPresetPurchaseItemsRemoved, const FString&, UserId, const TArray<FString>&, itemsToRemove);
