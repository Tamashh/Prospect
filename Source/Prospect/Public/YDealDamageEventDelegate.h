#pragma once
#include "CoreMinimal.h"
#include "YDealtDamageData.h"
#include "YDealDamageEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYDealDamageEvent, const FYDealtDamageData&, Data);

