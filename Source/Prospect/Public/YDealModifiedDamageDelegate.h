#pragma once
#include "CoreMinimal.h"
#include "YDealtDamageData.h"
#include "YDealModifiedDamageDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYDealModifiedDamage, FYDealtDamageData&, Data);

