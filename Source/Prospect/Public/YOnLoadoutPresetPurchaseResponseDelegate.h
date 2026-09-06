#pragma once
#include "CoreMinimal.h"
#include "EYPurchaseWeaponShopItemStatus.h"
#include "YOnLoadoutPresetPurchaseResponseDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FYOnLoadoutPresetPurchaseResponse, bool, successful, int32, loadoutpresetIndex, EYPurchaseWeaponShopItemStatus, responseStatus);
