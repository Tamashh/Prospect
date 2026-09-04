#pragma once
#include "CoreMinimal.h"
#include "EYItemType.h"
#include "YOnSetItemFilterButtonClickedDelegate.generated.h"

class UYWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnSetItemFilterButtonClicked, UYWidget*, buttonRef, EYItemType, Item);

