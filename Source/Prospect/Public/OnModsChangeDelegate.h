#pragma once
#include "CoreMinimal.h"
#include "OnModsChangeDelegate.generated.h"

class UYWeaponPlayerControllerRuntimeComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnModsChange, UYWeaponPlayerControllerRuntimeComponent*, wepaonPlayerControllerRuntimeComponent);

