#pragma once
#include "CoreMinimal.h"
#include "YPlayerStateChangeData.h"
#include "OnPlayerGameDataChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerGameDataChanged, FYPlayerStateChangeData, resultData);

