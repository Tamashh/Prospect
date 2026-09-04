#pragma once
#include "CoreMinimal.h"
#include "YDealtDamageData.h"
#include "OnDeathRagdollDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDeathRagdollDelegate, FYDealtDamageData, damageData);

