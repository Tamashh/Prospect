#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OnActiveWeaponChangedDelegate.generated.h"

class UYWeaponPlayerControllerRuntimeComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActiveWeaponChanged, UYWeaponPlayerControllerRuntimeComponent*, weaponPlayerControllerRuntimeComponent, FDataTableRowHandle, newRow);

