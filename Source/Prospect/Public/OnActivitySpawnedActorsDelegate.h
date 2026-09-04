#pragma once
#include "CoreMinimal.h"
#include "EYActivityType.h"
#include "OnActivitySpawnedActorsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActivitySpawnedActors, EYActivityType, activityType);

