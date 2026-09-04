#pragma once
#include "CoreMinimal.h"
#include "YEnterMatchmakingResult.h"
#include "YOnMatchmakingResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnMatchmakingResult, FYEnterMatchmakingResult, Result);

