#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OnAbilityUnequipedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAbilityUnequiped, const AActor*, PlayerController, const FDataTableRowHandle&, abilityRowHandle);

