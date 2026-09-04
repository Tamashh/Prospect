#pragma once
#include "CoreMinimal.h"
#include "YToggleQuickMenuVisibilityDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYToggleQuickMenuVisibility, bool, Visibility);

