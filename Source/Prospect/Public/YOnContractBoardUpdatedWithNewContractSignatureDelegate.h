#pragma once
#include "CoreMinimal.h"
#include "YOnContractBoardUpdatedWithNewContractSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnContractBoardUpdatedWithNewContractSignature, const FString&, newContractId, const bool, contractIsLockedDueToLowFactionReputation);

