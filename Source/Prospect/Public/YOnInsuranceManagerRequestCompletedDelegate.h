#pragma once
#include "CoreMinimal.h"
#include "YOnInsuranceManagerRequestCompletedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnInsuranceManagerRequestCompleted, bool, success);

