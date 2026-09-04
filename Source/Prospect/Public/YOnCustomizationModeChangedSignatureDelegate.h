#pragma once
#include "CoreMinimal.h"
#include "EYCustomizationMode.h"
#include "YOnCustomizationModeChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnCustomizationModeChangedSignature, EYCustomizationMode, NewMode);

