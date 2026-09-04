#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnHitTransportNotifyDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHitTransportNotify, FVector, notifyLocation);

