#pragma once
#include "CoreMinimal.h"
#include "YHealthDataTableRow.h"
#include "HealthDataChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHealthDataChangedSignature, const FYHealthDataTableRow&, HealthData);

