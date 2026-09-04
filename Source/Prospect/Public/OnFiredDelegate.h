#pragma once
#include "CoreMinimal.h"
#include "OnFiredDelegate.generated.h"

class UYAIAttackComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFired, UYAIAttackComponent*, attackComponent);

