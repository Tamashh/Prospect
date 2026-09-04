#pragma once
#include "CoreMinimal.h"
#include "OnMissionLineStepCompletedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMissionLineStepCompleted, const int32&, missionStepIndex);

