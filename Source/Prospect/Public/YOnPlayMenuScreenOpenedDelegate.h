#pragma once
#include "CoreMinimal.h"
#include "EYPlayMenuScreenType.h"
#include "YOnPlayMenuScreenOpenedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnPlayMenuScreenOpened, EYPlayMenuScreenType, playMenuScreenType);
