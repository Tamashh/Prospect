#pragma once
#include "CoreMinimal.h"
#include "OnWeaponFiredDelegate.generated.h"

class UYWeaponPlayerControllerRuntimeComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWeaponFired, UYWeaponPlayerControllerRuntimeComponent*, weaponPlayerControllerRuntimeComponent);

