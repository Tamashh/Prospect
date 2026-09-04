#pragma once
#include "CoreMinimal.h"
#include "EYClaimContractRewardsStatus.h"
#include "YOnContractFailedClaimSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnContractFailedClaimSignature, const FString&, contractId, const EYClaimContractRewardsStatus&, contractRewardsStatus);

