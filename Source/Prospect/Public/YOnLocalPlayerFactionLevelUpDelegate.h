#pragma once
#include "CoreMinimal.h"
#include "YPlayerFactionLevelUpData.h"
#include "YOnLocalPlayerFactionLevelUpDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnLocalPlayerFactionLevelUp, const FYPlayerFactionLevelUpData&, playerFactionLevelUpData);

