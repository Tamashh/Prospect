#pragma once
#include "CoreMinimal.h"
#include "HelmetToggleSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHelmetToggleSignature, bool, IsEnabled);

