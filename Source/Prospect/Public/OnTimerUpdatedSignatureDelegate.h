#pragma once
#include "CoreMinimal.h"
#include "OnTimerUpdatedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTimerUpdatedSignature, const float, remainingSeconds);

