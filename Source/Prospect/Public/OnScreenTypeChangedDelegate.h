#pragma once
#include "CoreMinimal.h"
#include "EYScreenType.h"
#include "OnScreenTypeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnScreenTypeChanged, EYScreenType, screenType);

