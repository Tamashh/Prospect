#pragma once
#include "CoreMinimal.h"
#include "EYDeadDropDepositResult.h"
#include "OnDeadDropResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDeadDropResult, EYDeadDropDepositResult, Result);

