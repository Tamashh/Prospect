#pragma once
#include "CoreMinimal.h"
#include "YClaimableVictimCompensation.h"
#include "YControllerVictimCompensationRequestCompletedSignatureDelegate.generated.h"

class UYControllerVictimCompensationComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FYControllerVictimCompensationRequestCompletedSignature, UYControllerVictimCompensationComponent*, victimCompensationComponent, const FYClaimableVictimCompensation&, claimedPackage, bool, success);

