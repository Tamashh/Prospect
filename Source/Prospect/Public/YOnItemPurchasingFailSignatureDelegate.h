#pragma once
#include "CoreMinimal.h"
#include "EYPurchaseWeaponShopItemStatus.h"
#include "YOnItemPurchasingFailSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnItemPurchasingFailSignature, const EYPurchaseWeaponShopItemStatus, purchaseWeaponShopItemStatus);

