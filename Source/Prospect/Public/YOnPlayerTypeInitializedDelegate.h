#pragma once
#include "CoreMinimal.h"
#include "EYPlayerInitializationType.h"
#include "YOnPlayerTypeInitializedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnPlayerTypeInitialized, EYPlayerInitializationType, playerInitializationType);

