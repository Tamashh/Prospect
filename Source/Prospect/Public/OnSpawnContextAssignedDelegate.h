#pragma once
#include "CoreMinimal.h"
#include "OnSpawnContextAssignedDelegate.generated.h"

class AYPodActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSpawnContextAssigned, AYPodActor*, podActor);

