#pragma once
#include "CoreMinimal.h"
#include "OnSpawnBackgroundDropPodDelegate.generated.h"

class APlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSpawnBackgroundDropPod, APlayerController*, Controller);

