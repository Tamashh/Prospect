#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "YHighlightStateData.h"
#include "YOnHighlightContextInteractedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnHighlightContextInteracted, FGuid, Guid, const FYHighlightStateData&, Data);

