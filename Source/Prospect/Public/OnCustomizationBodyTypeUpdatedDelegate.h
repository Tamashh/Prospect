#pragma once
#include "CoreMinimal.h"
#include "YActiveCustomizationData.h"
#include "OnCustomizationBodyTypeUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnCustomizationBodyTypeUpdated, FYActiveCustomizationData, oldData, FYActiveCustomizationData, newData, bool, ForceRefresh);

