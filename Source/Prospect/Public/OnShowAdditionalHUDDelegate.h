#pragma once
#include "CoreMinimal.h"
#include "OnShowAdditionalHUDDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnShowAdditionalHUD, bool, showAdditionalHUD);

