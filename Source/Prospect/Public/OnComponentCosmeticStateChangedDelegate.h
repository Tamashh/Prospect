#pragma once
#include "CoreMinimal.h"
#include "OnComponentCosmeticStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnComponentCosmeticStateChanged, bool, newState);

