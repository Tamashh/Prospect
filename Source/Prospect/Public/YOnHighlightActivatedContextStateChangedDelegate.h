#pragma once
#include "CoreMinimal.h"
#include "YHighlightStateData.h"
#include "YOnHighlightActivatedContextStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnHighlightActivatedContextStateChanged, const FYHighlightStateData&, Data, bool, newState);

