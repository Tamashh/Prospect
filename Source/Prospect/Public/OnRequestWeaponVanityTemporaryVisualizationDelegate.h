#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OnRequestWeaponVanityTemporaryVisualizationDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnRequestWeaponVanityTemporaryVisualization, FDataTableRowHandle, vanityRowHandle, bool, shouldShow, bool, overrideOtherVanity);

