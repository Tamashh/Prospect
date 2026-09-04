#pragma once
#include "CoreMinimal.h"
#include "YCraftingInProgressData.h"
#include "YOnCraftingInProgressDataReceivedBackendSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnCraftingInProgressDataReceivedBackendSignature, const FString&, UserId, const FYCraftingInProgressData&, craftingInProgressData);

