#pragma once
#include "CoreMinimal.h"
#include "OnCloakStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCloakStateChanged, bool, cloakState);

