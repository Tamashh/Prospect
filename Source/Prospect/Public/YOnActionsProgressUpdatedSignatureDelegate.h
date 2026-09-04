#pragma once
#include "CoreMinimal.h"
#include "YProgressChange.h"
#include "YOnActionsProgressUpdatedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnActionsProgressUpdatedSignature, const TArray<FYProgressChange>&, actionsProgressIncrease);

