#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnDebugSpawnBackgroundDropPodDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDebugSpawnBackgroundDropPod, FVector, Location);

