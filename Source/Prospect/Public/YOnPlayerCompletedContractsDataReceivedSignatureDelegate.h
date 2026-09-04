#pragma once
#include "CoreMinimal.h"
#include "YGetCompletedContractsResult.h"
#include "YOnPlayerCompletedContractsDataReceivedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnPlayerCompletedContractsDataReceivedSignature, const FString&, UserId, const FYGetCompletedContractsResult&, completedContracts);

