#pragma once
#include "CoreMinimal.h"
#include "YActiveCustomizationData.h"
#include "OnNewActiveCustomizationDataDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNewActiveCustomizationData, FYActiveCustomizationData, newCustomizationData);

