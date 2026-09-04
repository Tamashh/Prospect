#pragma once
#include "CoreMinimal.h"
#include "OnHealSelfAvaliableDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHealSelfAvaliable, bool, healSelfAvaliable);

