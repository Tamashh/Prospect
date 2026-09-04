#pragma once
#include "CoreMinimal.h"
#include "YContractsProgress.h"
#include "YOnProgressUpdatedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnProgressUpdatedSignature, const FYContractsProgress&, contractsCurrentProgressClamp);

