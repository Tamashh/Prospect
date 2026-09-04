#pragma once
#include "CoreMinimal.h"
#include "EYShopTabType.h"
#include "YOnShopTabTypeOpenedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnShopTabTypeOpened, EYShopTabType, ShopTabType);

