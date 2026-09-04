#pragma once
#include "CoreMinimal.h"
#include "OnCategorySlotClickedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCategorySlotClicked, int32, Slot);

