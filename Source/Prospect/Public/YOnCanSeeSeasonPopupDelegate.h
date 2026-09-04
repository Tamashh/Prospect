#pragma once
#include "CoreMinimal.h"
#include "YOnCanSeeSeasonPopupDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnCanSeeSeasonPopup, bool, showPopup);

