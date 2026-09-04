#pragma once
#include "CoreMinimal.h"
#include "YSocialActorPlacedData.h"
#include "OnSocialActorUsedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSocialActorUsed, FYSocialActorPlacedData, Data);

