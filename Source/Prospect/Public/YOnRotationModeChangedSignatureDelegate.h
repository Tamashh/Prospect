#pragma once
#include "CoreMinimal.h"
#include "YOnRotationModeChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnRotationModeChangedSignature, bool, NewMode);

