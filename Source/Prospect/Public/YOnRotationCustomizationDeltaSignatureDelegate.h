#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "YOnRotationCustomizationDeltaSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnRotationCustomizationDeltaSignature, const FVector2D&, Rotation);

