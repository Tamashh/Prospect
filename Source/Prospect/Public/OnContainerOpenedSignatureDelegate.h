#pragma once
#include "CoreMinimal.h"
#include "OnContainerOpenedSignatureDelegate.generated.h"

class AYPlayerController_Match;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnContainerOpenedSignature, AYPlayerController_Match*, collectingPlayer);

