#pragma once
#include "CoreMinimal.h"
#include "YOnCheatContractCompleteSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnCheatContractCompleteSignature, const FString&, contractId);

