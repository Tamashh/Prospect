#pragma once
#include "CoreMinimal.h"
#include "OnWeaponTransportComponentDisabledDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWeaponTransportComponentDisabled, int32, transportHandle);

