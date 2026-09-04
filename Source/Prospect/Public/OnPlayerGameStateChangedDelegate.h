#pragma once
#include "CoreMinimal.h"
#include "YPlayerStateChangeData.h"
#include "OnPlayerGameStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerGameStateChanged, FYPlayerStateChangeData, newData);

