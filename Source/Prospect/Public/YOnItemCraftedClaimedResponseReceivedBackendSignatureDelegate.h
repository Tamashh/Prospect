#pragma once
#include "CoreMinimal.h"
#include "YOnItemCraftedClaimedResponseReceivedBackendSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnItemCraftedClaimedResponseReceivedBackendSignature, const bool, craftingFailed);

