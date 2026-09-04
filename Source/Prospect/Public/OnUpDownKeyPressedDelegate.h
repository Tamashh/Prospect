#pragma once
#include "CoreMinimal.h"
#include "OnUpDownKeyPressedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpDownKeyPressed, bool, upPressed);

