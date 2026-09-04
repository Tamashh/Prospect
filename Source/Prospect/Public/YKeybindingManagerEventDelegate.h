#pragma once
#include "CoreMinimal.h"
#include "YKeybindingManagerEventDelegate.generated.h"

class UYKeybindingsManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYKeybindingManagerEvent, UYKeybindingsManager*, manager);

