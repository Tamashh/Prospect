#pragma once
#include "CoreMinimal.h"
#include "YOnBackendFreeloadoutsActivationResponseReceivedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnBackendFreeloadoutsActivationResponseReceivedSignature, bool, IsActive);
