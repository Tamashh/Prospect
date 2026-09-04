#pragma once
#include "CoreMinimal.h"
#include "OnAttackStartedDelegate.generated.h"

class UYAIAttackComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAttackStarted, UYAIAttackComponent*, attackComponent);

