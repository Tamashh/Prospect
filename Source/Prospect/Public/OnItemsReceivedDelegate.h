#pragma once
#include "CoreMinimal.h"
#include "YShopBlueprintData.h"
#include "OnItemsReceivedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemsReceived, const TArray<FYShopBlueprintData>&, itemUiData);

