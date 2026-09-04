#pragma once
#include "CoreMinimal.h"
#include "YInventoryItem.h"
#include "YOnTwitchDropItemsClaimCompletedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnTwitchDropItemsClaimCompletedSignature, const TArray<FYInventoryItem>&, GrantedItems);

