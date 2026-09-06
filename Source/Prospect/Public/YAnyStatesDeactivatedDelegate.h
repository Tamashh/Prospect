#pragma once
#include "CoreMinimal.h"
#include "EYPlayerStateBlueprint.h"
#include "YAnyStatesDeactivatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYAnyStatesDeactivated, const TArray<EYPlayerStateBlueprint>&, states);
