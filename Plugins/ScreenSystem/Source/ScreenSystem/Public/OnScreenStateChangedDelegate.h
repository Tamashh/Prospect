#pragma once
#include "CoreMinimal.h"
#include "EYScreenType.h"
#include "OnScreenStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnScreenStateChanged, EYScreenType, screenType);

