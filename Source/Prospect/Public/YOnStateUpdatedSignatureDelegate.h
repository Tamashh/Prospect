#pragma once
#include "CoreMinimal.h"
#include "YActiveContractsUIData.h"
#include "YOnStateUpdatedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnStateUpdatedSignature, const FYActiveContractsUIData&, activeContractsUIData);

