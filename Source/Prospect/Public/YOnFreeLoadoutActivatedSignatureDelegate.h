#pragma once
#include "CoreMinimal.h"
#include "YOnFreeLoadoutActivatedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnFreeLoadoutActivatedSignature, bool, activated);
