#pragma once
#include "CoreMinimal.h"
#include "OnToggleDamageRecapVisibilityDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnToggleDamageRecapVisibilityDelegate, bool, ShowDamageRecap);

