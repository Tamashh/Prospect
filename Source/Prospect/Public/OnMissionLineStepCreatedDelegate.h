#pragma once
#include "CoreMinimal.h"
#include "YMissionRuntimeData.h"
#include "OnMissionLineStepCreatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMissionLineStepCreated, const FYMissionRuntimeData&, uiMissionLineStepInfo);

