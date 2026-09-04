#pragma once
#include "CoreMinimal.h"
#include "YPlayerCosmeticReplicatedData.h"
#include "OnCosmeticVisualizationChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCosmeticVisualizationChanged, const FYPlayerCosmeticReplicatedData&, oldData, const FYPlayerCosmeticReplicatedData&, newData);

