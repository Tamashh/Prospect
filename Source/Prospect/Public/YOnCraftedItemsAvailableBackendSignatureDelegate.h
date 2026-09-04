#pragma once
#include "CoreMinimal.h"
#include "YCustomItemInfo.h"
#include "YOnCraftedItemsAvailableBackendSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnCraftedItemsAvailableBackendSignature, const FString&, UserId, const TArray<FYCustomItemInfo>&, infos);

