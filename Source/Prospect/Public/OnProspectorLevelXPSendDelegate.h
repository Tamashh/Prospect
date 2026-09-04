#pragma once
#include "CoreMinimal.h"
#include "YPlayerReward.h"
#include "OnProspectorLevelXPSendDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnProspectorLevelXPSend, const TArray<FYPlayerReward>&, prospectorLevelRewards);

