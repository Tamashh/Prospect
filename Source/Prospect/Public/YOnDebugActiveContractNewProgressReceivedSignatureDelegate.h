#pragma once
#include "CoreMinimal.h"
#include "YOnDebugActiveContractNewProgressReceivedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FYOnDebugActiveContractNewProgressReceivedSignature, const FString&, UserId, const FString&, activeContractId, const int32, objectiveIndex, const int32, newProgress);

