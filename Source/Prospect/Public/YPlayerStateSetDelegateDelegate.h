#pragma once
#include "CoreMinimal.h"
#include "YPlayerStateSetDelegateDelegate.generated.h"

class AYPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYPlayerStateSetDelegate, AYPlayerState*, PlayerState);

