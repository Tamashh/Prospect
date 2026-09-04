#pragma once
#include "CoreMinimal.h"
#include "YCraftedBlueprintInfo.h"
#include "YOnClaimedItemResponseReceivedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnClaimedItemResponseReceivedSignature, const FYCraftedBlueprintInfo&, Data);

