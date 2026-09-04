#pragma once
#include "CoreMinimal.h"
#include "OnMissionStatusDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMissionStatusDelegate, int32, Handle);

