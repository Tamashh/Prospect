#pragma once
#include "CoreMinimal.h"
#include "EYCameraIntentionType.h"
#include "OnCameraIntentionChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCameraIntentionChanged, EYCameraIntentionType, intention);

