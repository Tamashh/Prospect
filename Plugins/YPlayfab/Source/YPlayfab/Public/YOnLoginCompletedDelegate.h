#pragma once
#include "CoreMinimal.h"
#include "YOnLoginCompletedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FYOnLoginCompleted, bool, succeded, const FString&, loginError, const FString&, playfabTitleId);

