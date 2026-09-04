#pragma once
#include "CoreMinimal.h"
#include "YInstanceUpdateAmount.h"
#include "YCustomItemsUpdatedOrRemovedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYCustomItemsUpdatedOrRemovedSignature, const FString&, UserId, const TArray<FYInstanceUpdateAmount>&, itemsToUpdateOrRemove);

