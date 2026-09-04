#pragma once
#include "CoreMinimal.h"
#include "EYClaimContractRewardsStatus.h"
#include "YOnPlayerFailedContractClaimSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FYOnPlayerFailedContractClaimSignature, const FString&, UserId, const FString&, contractId, const EYClaimContractRewardsStatus, contractRewardsStatus);

