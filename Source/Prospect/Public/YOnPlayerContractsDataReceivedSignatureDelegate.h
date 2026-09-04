#pragma once
#include "CoreMinimal.h"
#include "YPlayerContractsInitData.h"
#include "YOnPlayerContractsDataReceivedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnPlayerContractsDataReceivedSignature, const FYPlayerContractsInitData&, playerActiveContractsInitData);

