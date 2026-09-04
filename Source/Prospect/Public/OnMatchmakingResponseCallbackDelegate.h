#pragma once
#include "CoreMinimal.h"
#include "EYMatchmakingResult.h"
#include "OnMatchmakingResponseCallbackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnMatchmakingResponseCallback, EYMatchmakingResult, mmResult, const FString&, GameMode, const bool, isRanked);

