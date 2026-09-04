#pragma once
#include "CoreMinimal.h"
#include "OnJumpOffDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJumpOff, AActor*, movementBaseActor);

