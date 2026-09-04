#pragma once
#include "CoreMinimal.h"
#include "YCondensedDamageData.h"
#include "OnCondensedDamageInfoReceivedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCondensedDamageInfoReceived, const TArray<FYCondensedDamageData>&, Events);

