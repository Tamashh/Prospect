#pragma once
#include "CoreMinimal.h"
#include "OnCheckBoxStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCheckBoxStateChanged, bool, Result);

