#pragma once
#include "CoreMinimal.h"
#include "YLandingEventInfo.h"
#include "YLandingDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYLandingDelegate, const FYLandingEventInfo&, landingInfo);

