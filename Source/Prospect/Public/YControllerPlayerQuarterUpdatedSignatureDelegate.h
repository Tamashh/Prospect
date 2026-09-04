#pragma once
#include "CoreMinimal.h"
#include "YControllerPlayerQuarterUpdatedSignatureDelegate.generated.h"

class UYControllerPlayerQuarterComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYControllerPlayerQuarterUpdatedSignature, UYControllerPlayerQuarterComponent*, playerQuarterComponent);

