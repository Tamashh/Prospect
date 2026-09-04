#pragma once
#include "CoreMinimal.h"
#include "YOnItemCraftingStartedReceivedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnItemCraftingStartedReceivedSignature, const FString&, baseItemId);

