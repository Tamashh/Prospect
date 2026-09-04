#pragma once
#include "CoreMinimal.h"
#include "YUpdatedFactionProgression.h"
#include "YOnUpdatedFactionProgressionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnUpdatedFactionProgression, const FYUpdatedFactionProgression&, updatedFactionProgression);

