#pragma once
#include "CoreMinimal.h"
#include "YRetentionProgress.h"
#include "YOnRetentionBonusDataReceivedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FYOnRetentionBonusDataReceived, FYRetentionProgress, progressData);

