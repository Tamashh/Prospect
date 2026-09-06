#pragma once
#include "CoreMinimal.h"
#include "EYPurchaseWeaponShopItemStatus.h"
#include "OnLoadoutPresetPurchaseDelegate.generated.h"

class UYControllerLoadoutPresetComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnLoadoutPresetPurchase, UYControllerLoadoutPresetComponent*, loadoutPresetComponent, bool, successful, EYPurchaseWeaponShopItemStatus, responseStatus);
