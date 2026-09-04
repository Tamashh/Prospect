#pragma once
#include "CoreMinimal.h"
#include "OnMissionCompletedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMissionCompleted, const int32&, missionStepIndex);

