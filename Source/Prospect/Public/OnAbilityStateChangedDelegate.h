#pragma once
#include "CoreMinimal.h"
#include "YAbilityStateInfo.h"
#include "OnAbilityStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAbilityStateChanged, const FYAbilityStateInfo&, Info);

