#pragma once
#include "CoreMinimal.h"
#include "OnInteractionEndedDelegate.generated.h"

class UYPlayerInteractionComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteractionEnded, UYPlayerInteractionComponent*, Component);

