#pragma once
#include "CoreMinimal.h"
#include "OnHudBegunPlayDelegateDelegate.generated.h"

class AYHUD;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHudBegunPlayDelegate, AYHUD*, HUD);

