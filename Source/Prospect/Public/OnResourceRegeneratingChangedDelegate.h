#pragma once
#include "CoreMinimal.h"
#include "OnResourceRegeneratingChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnResourceRegeneratingChanged, bool, IsRegenerating);

