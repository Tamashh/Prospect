#pragma once
#include "CoreMinimal.h"
#include "OnBlendToRagdollDelegate.generated.h"

class UYCharacterDeathComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBlendToRagdoll, UYCharacterDeathComponent*, deathComponent);

