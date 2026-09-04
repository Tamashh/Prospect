#pragma once
#include "CoreMinimal.h"
#include "OnMeleeAttackDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMeleeAttack, AActor*, aiCharacter);

