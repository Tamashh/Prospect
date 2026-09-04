#pragma once
#include "CoreMinimal.h"
#include "YPlayerFactionProgressionUIData.h"
#include "YOnLocalPlayerFactionProgressDataReceivedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnLocalPlayerFactionProgressDataReceived, const FYPlayerFactionProgressionUIData&, uiData);

