#pragma once
#include "CoreMinimal.h"
#include "YDealtDamageData.h"
#include "YTakeDamageNativeEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYTakeDamageNativeEvent, FYDealtDamageData&, Data);

