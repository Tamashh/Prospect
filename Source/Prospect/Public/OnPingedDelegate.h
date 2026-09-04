#pragma once
#include "CoreMinimal.h"
#include "OnPingedDelegate.generated.h"

class AYSocialActor;
class UYPingableComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPinged, UYPingableComponent*, Component, AYSocialActor*, socialActor);

