#pragma once
#include "CoreMinimal.h"
#include "EYStartItemCraftingResultStatus.h"
#include "YOnItemCraftingStartedFailSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnItemCraftingStartedFailSignature, const EYStartItemCraftingResultStatus, startItemCraftingStatus);

