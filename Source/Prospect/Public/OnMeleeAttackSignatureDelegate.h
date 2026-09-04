#pragma once
#include "CoreMinimal.h"
#include "OnMeleeAttackSignatureDelegate.generated.h"

class UYWeaponPlayerControllerRuntimeComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMeleeAttackSignature, UYWeaponPlayerControllerRuntimeComponent*, weaponPlayerControllerRuntimeComponent);

