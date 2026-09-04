#pragma once
#include "CoreMinimal.h"
#include "YUpdateVanityData.h"
#include "OnVanityItemHoveredDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVanityItemHovered, FYUpdateVanityData, vanityData, bool, hover);

