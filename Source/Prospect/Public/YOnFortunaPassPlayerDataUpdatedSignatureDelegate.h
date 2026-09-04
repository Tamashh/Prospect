#pragma once
#include "CoreMinimal.h"
#include "YFortunaPassPlayerData.h"
#include "YOnFortunaPassPlayerDataUpdatedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnFortunaPassPlayerDataUpdatedSignature, const FYFortunaPassPlayerData&, Data);

