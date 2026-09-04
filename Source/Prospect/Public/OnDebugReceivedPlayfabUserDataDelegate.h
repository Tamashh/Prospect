#pragma once
#include "CoreMinimal.h"
#include "OnDebugReceivedPlayfabUserDataDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDebugReceivedPlayfabUserData, const FString&, userData);

