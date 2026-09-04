#pragma once
#include "CoreMinimal.h"
#include "YActiveGlobalRuntimeVanityData.h"
#include "OnNewGlobalVanityDataDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNewGlobalVanityData, const FYActiveGlobalRuntimeVanityData&, newVanityData);

