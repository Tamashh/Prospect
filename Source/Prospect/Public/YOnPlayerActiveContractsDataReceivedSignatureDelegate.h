#pragma once
#include "CoreMinimal.h"
#include "YActiveContractsInitData.h"
#include "YOnPlayerActiveContractsDataReceivedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnPlayerActiveContractsDataReceivedSignature, const FYActiveContractsInitData&, playerActiveContractsInitData);

