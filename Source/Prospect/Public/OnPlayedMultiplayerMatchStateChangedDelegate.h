#pragma once
#include "CoreMinimal.h"
#include "OnPlayedMultiplayerMatchStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayedMultiplayerMatchStateChanged, bool, played);

