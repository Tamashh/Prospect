#pragma once
#include "CoreMinimal.h"
#include "StaminaUseAttemptedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStaminaUseAttemptedSignature, bool, successful);

