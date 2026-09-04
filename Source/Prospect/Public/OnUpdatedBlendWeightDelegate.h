#pragma once
#include "CoreMinimal.h"
#include "OnUpdatedBlendWeightDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpdatedBlendWeight, float, BlendWeight);

