#pragma once
#include "CoreMinimal.h"
#include "OnInteractionStartedDelegate.generated.h"

class UYPlayerInteractionComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteractionStarted, UYPlayerInteractionComponent*, Component);

