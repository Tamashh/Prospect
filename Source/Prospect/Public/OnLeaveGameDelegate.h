#pragma once
#include "CoreMinimal.h"
#include "YLeaveGameEvent.h"
#include "OnLeaveGameDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLeaveGame, FYLeaveGameEvent, LeaveGame);

