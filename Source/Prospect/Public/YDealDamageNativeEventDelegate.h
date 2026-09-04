#pragma once
#include "CoreMinimal.h"
#include "YDealtDamageData.h"
#include "YDealDamageNativeEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYDealDamageNativeEvent, FYDealtDamageData&, Data);

