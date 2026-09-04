#pragma once
#include "CoreMinimal.h"
#include "YOnResetActionsCapBackendResponseReceivedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnResetActionsCapBackendResponseReceivedSignature, const FString&, UserId);

