#pragma once
#include "CoreMinimal.h"
#include "OnInitialSpawningFinishedDelegate.generated.h"

class AYActivityActorManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInitialSpawningFinished, AYActivityActorManager*, activityActorManager);

