#pragma once
#include "CoreMinimal.h"
#include "YActiveContractsUIData.h"
#include "YOnContractsStatusChangedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnContractsStatusChangedSignature, const FYActiveContractsUIData&, activeContractsUIData);

