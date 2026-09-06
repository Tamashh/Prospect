#pragma once
#include "CoreMinimal.h"
#include "EYInventoryPlayerTypes.h"
#include "YBackendInventoryStateChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYBackendInventoryStateChangedSignature, const TArray<EYInventoryPlayerTypes>&, typesChanged);

