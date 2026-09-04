#pragma once
#include "CoreMinimal.h"
#include "YStoredInventoryWeaponData.h"
#include "OnWeaponAddedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnWeaponAdded, AActor*, actorContext, const FYStoredInventoryWeaponData&, storedInformation);

