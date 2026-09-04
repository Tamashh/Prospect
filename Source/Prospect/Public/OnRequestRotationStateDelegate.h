#pragma once
#include "CoreMinimal.h"
#include "OnRequestRotationStateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRequestRotationState, bool, IsActive);

