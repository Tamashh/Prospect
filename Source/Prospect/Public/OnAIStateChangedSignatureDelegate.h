#pragma once
#include "CoreMinimal.h"
#include "EYAIState.h"
#include "OnAIStateChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAIStateChangedSignature, EYAIState, oldState, EYAIState, currentState);

