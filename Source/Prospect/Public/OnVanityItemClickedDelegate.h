#pragma once
#include "CoreMinimal.h"
#include "YUpdateVanityData.h"
#include "OnVanityItemClickedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVanityItemClicked, FYUpdateVanityData, vanityData);

