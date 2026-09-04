#pragma once
#include "CoreMinimal.h"
#include "EYInputUIStackType.h"
#include "OnInputStackTypeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInputStackTypeChanged, EYInputUIStackType, stackType, bool, Visible);

