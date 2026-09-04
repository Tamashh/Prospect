#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnRangedAttackDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRangedAttack, FVector, shootAtLocation);

