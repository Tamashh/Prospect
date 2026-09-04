#pragma once
#include "CoreMinimal.h"
#include "YUpdatedFactionProgression.h"
#include "YOnUpdatedFactionProgressionSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnUpdatedFactionProgressionSignature, const FYUpdatedFactionProgression&, updatedFactionProgression);

