#pragma once
#include "CoreMinimal.h"
#include "YDamageEvent.h"
#include "OnDebugUncondensedDamageInfoReceivedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDebugUncondensedDamageInfoReceived, const TArray<FYDamageEvent>&, Events);

