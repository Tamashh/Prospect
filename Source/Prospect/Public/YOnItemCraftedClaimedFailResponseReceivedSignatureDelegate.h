#pragma once
#include "CoreMinimal.h"
#include "YOnItemCraftedClaimedFailResponseReceivedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnItemCraftedClaimedFailResponseReceivedSignature, const bool, craftingFailed);

