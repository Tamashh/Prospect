#pragma once
#include "CoreMinimal.h"
#include "YLoadoutPresetUIItem.h"
#include "OnLoadoutPresetItemStateSetDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLoadoutPresetItemStateSet, FYLoadoutPresetUIItem, State);
