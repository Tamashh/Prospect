#pragma once
#include "CoreMinimal.h"
#include "EYPlayerStateBlueprint.h"
#include "EYStateChangeType.h"
#include "YOnAnyStateChangedWithCancelDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnAnyStateChangedWithCancel, EYStateChangeType, stateChangeType, const TArray<EYPlayerStateBlueprint>&, statesThatChanged);

