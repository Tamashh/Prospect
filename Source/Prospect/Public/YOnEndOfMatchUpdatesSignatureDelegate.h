#pragma once
#include "CoreMinimal.h"
#include "YEomInventoryData.h"
#include "YOnEndOfMatchUpdatesSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnEndOfMatchUpdatesSignature, const FYEomInventoryData&, Data);

