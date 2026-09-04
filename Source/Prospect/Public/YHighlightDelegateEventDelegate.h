#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EYHighlightStateChangeType.h"
#include "YHighlightDelegateEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FYHighlightDelegateEvent, FGuid, Data, EYHighlightStateChangeType, Type);

