#pragma once
#include "CoreMinimal.h"
#include "YMissionProgressionUpdated.h"
#include "YMissionDataUpdatedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYMissionDataUpdatedSignature, const FYMissionProgressionUpdated&, missionProgressionUpdated);

