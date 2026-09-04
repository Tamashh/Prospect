#pragma once
#include "CoreMinimal.h"
#include "OnNewAttackPhaseStartedDelegate.generated.h"

class UYAIAttackComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNewAttackPhaseStarted, UYAIAttackComponent*, attackComponent);

