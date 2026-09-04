#pragma once
#include "CoreMinimal.h"
#include "YReplicatedLedgeClimbingData.h"
#include "OnLedgeClimbingDataReplicatedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLedgeClimbingDataReplicatedDelegate, const FYReplicatedLedgeClimbingData&, oldData, const FYReplicatedLedgeClimbingData&, newData);

