#pragma once
#include "CoreMinimal.h"
#include "YOnUpdateActionsDataReceivedBackendSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnUpdateActionsDataReceivedBackendSignature, const FString&, UserId);

