#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OnAbilityDroppedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAbilityDropped, AActor*, PlayerController, const FDataTableRowHandle&, abilityRowHandle);

