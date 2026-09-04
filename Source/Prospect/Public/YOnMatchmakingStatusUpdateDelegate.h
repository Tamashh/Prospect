#pragma once
#include "CoreMinimal.h"
#include "EYMatchmakingStatus.h"
#include "YOnMatchmakingStatusUpdateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnMatchmakingStatusUpdate, EYMatchmakingStatus, Status);

