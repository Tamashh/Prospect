#pragma once
#include "CoreMinimal.h"
#include "OnAttackEndedDelegate.generated.h"

class UYAIAttackComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAttackEnded, UYAIAttackComponent*, attackComponent, bool, isCancelled);

