#pragma once
#include "CoreMinimal.h"
#include "YDealtDamageData.h"
#include "YTakeDamageEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYTakeDamageEvent, const FYDealtDamageData&, Data);

