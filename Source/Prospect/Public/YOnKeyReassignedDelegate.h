#pragma once
#include "CoreMinimal.h"
#include "Framework/Commands/InputChord.h"
#include "YOnKeyReassignedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FYOnKeyReassigned, const FInputChord&, InputChord, const FText&, oldKey, const FText&, newKey);

