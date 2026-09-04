#pragma once
#include "CoreMinimal.h"
#include "YDealtDamageData.h"
#include "YEvaluateModifiedDamageDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYEvaluateModifiedDamage, FYDealtDamageData&, Data);

