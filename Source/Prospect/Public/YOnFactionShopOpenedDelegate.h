#pragma once
#include "CoreMinimal.h"
#include "EYFaction.h"
#include "EYShopTabType.h"
#include "YOnFactionShopOpenedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnFactionShopOpened, EYFaction, Faction, EYShopTabType, ActiveTabType);

