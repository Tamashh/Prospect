#pragma once
#include "CoreMinimal.h"
#include "YClaimableVictimCompensation.h"
#include "YOnVictimCompensationManagerRequestCompletedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FYOnVictimCompensationManagerRequestCompleted, bool, success, const FString&, Guid, const FYClaimableVictimCompensation&, claimedPackage);

