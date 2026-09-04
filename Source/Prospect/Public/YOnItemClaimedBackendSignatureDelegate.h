#pragma once
#include "CoreMinimal.h"
#include "YCraftedBlueprintInfo.h"
#include "YOnItemClaimedBackendSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnItemClaimedBackendSignature, const FYCraftedBlueprintInfo&, craftedBlueprintInfo);

