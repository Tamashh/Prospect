#pragma once
#include "CoreMinimal.h"
#include "YOnPlayerCanceledActiveContractSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnPlayerCanceledActiveContractSignature, const FString&, UserId, const FString&, playerActiveContractId);

