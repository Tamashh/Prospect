#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnPlayerSpawnBackgroundDropPodDelegate.generated.h"

class APlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerSpawnBackgroundDropPod, APlayerController*, Controller, FVector, introStartLocation);

