#pragma once
#include "CoreMinimal.h"
#include "YOnFreeLoadoutFilterSelectionSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnFreeLoadoutFilterSelectionSignature, bool, IsSelected);
