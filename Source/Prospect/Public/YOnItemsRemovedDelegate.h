#pragma once
#include "CoreMinimal.h"
#include "YOnItemsRemovedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnItemsRemoved, const FString&, UserId, const TArray<FString>&, itemsToRemove);

