#pragma once
#include "CoreMinimal.h"
#include "YClaimedContractBackendData.h"
#include "YOnPlayerCompletedActiveContractRewardsClaimedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnPlayerCompletedActiveContractRewardsClaimedSignature, const FYClaimedContractBackendData&, claimedContractBackendData);

