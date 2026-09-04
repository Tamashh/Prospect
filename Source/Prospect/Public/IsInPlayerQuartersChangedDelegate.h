#pragma once
#include "CoreMinimal.h"
#include "IsInPlayerQuartersChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIsInPlayerQuartersChanged, bool, IsInPlayerQuarters);

