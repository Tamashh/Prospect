#pragma once
#include "CoreMinimal.h"
#include "YPlayerMatchBIStats.h"
#include "OnTrySendingPlayerStatsEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTrySendingPlayerStatsEvent, const FYPlayerMatchBIStats&, playerStatsEvent);

