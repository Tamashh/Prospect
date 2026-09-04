#pragma once
#include "CoreMinimal.h"
#include "MaxStaminaChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMaxStaminaChangedSignature, float, maxStamina);

