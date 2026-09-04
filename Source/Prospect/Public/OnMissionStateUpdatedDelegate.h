#pragma once
#include "CoreMinimal.h"
#include "YMissionReplicatedStateData.h"
#include "OnMissionStateUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMissionStateUpdated, const FYMissionReplicatedStateData&, missionReplicatedStateData);

