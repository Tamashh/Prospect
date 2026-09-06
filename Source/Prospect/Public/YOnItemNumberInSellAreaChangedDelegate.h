#pragma once
#include "CoreMinimal.h"
#include "YOnItemNumberInSellAreaChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnItemNumberInSellAreaChanged, const int32, numberOfItems);
