#pragma once
#include "CoreMinimal.h"
#include "OnSpeedHackDetectedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnSpeedHackDetected, float, clientSpeed, float, serverSpeed, float, padding_01, float, padding_02);

