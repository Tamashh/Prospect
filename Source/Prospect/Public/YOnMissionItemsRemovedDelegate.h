#pragma once
#include "CoreMinimal.h"
#include "YOnMissionItemsRemovedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnMissionItemsRemoved, const FString&, UserId, const TArray<FString>&, itemsToRemove);
