#pragma once
#include "CoreMinimal.h"
#include "YCustomItemInfo.h"
#include "YOnMissionRewardsReceivedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnMissionRewardsReceived, const FString&, UserId, const TArray<FYCustomItemInfo>&, rewards);

