#pragma once
#include "CoreMinimal.h"
#include "YContractsProgress.h"
#include "YOnActiveContractsProgressUpdatedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnActiveContractsProgressUpdatedSignature, const FYContractsProgress&, contractsProgress);

