#pragma once
#include "CoreMinimal.h"
#include "YActiveContractInitData.h"
#include "YOnPlayerContractActivatedDataReceivedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnPlayerContractActivatedDataReceivedSignature, const FYActiveContractInitData&, playerActiveContractInitData);

