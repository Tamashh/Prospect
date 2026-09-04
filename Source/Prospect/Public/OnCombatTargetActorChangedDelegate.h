#pragma once
#include "CoreMinimal.h"
#include "OnCombatTargetActorChangedDelegate.generated.h"

class AActor;
class UYAIDataComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCombatTargetActorChanged, UYAIDataComponent*, aiDataComponent, AActor*, Actor);

