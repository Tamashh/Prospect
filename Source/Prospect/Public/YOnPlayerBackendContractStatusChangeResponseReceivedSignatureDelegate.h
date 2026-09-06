#pragma once
#include "CoreMinimal.h"
#include "YContractStatusChangeInfo.h"
#include "YOnPlayerBackendContractStatusChangeResponseReceivedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FYOnPlayerBackendContractStatusChangeResponseReceivedSignature, const FString&, callerUserId, const bool, isFail, const bool, anActiveContractHasBeenCancelled, const FYContractStatusChangeInfo&, Info);

