#pragma once
#include "CoreMinimal.h"
#include "YPlayerQuarterPurchaseFailureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYPlayerQuarterPurchaseFailure, const FString&, Error);

