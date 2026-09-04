#pragma once
#include "CoreMinimal.h"
#include "OnReticleToggleChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReticleToggleChangedSignature, bool, newState);

