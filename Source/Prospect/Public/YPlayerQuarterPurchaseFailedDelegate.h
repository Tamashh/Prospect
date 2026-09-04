#pragma once
#include "CoreMinimal.h"
#include "YPlayerQuarterPurchaseFailedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYPlayerQuarterPurchaseFailed, const FString&, Error);

