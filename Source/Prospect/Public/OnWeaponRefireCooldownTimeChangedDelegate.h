#pragma once
#include "CoreMinimal.h"
#include "OnWeaponRefireCooldownTimeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWeaponRefireCooldownTimeChanged, float, percentage);

