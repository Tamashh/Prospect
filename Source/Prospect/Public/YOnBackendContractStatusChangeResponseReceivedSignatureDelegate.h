#pragma once
#include "CoreMinimal.h"
#include "YContractStatusChangeInfo.h"
#include "YOnBackendContractStatusChangeResponseReceivedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FYOnBackendContractStatusChangeResponseReceivedSignature, const bool, isFail, const bool, anActiveContractHasBeenCancelled, FYContractStatusChangeInfo, Info);

