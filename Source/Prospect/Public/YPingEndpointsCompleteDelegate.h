#pragma once
#include "CoreMinimal.h"
#include "EYServicePingTypes.h"
#include "YPingEndpointsCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYPingEndpointsComplete, EYServicePingTypes, Type);

