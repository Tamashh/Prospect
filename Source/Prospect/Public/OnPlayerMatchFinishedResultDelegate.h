#pragma once
#include "CoreMinimal.h"
#include "EYPlayerMatchFinishedResult.h"
#include "OnPlayerMatchFinishedResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerMatchFinishedResult, EYPlayerMatchFinishedResult, Result);

