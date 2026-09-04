#pragma once
#include "CoreMinimal.h"
#include "OnMatchCameraUpdatedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMatchCameraUpdated, AActor*, newActor);

