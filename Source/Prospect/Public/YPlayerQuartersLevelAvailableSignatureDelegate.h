#pragma once
#include "CoreMinimal.h"
#include "YPlayerQuarterStatus.h"
#include "YPlayerQuartersLevelAvailableSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYPlayerQuartersLevelAvailableSignature, const FYPlayerQuarterStatus&, playerQuarterStatus, const int32&, remainingTimeInSeconds);

