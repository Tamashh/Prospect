#pragma once
#include "CoreMinimal.h"
#include "YPlayerStateChangeData.h"
#include "OnStateTypeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStateTypeChanged, FYPlayerStateChangeData, Data);

