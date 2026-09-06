#pragma once
#include "CoreMinimal.h"
#include "EYPurchaseWeaponShopItemStatus.h"
#include "OnLoadoutPresetItemStateSetDelegate.h"
#include "YWidget_ItemComponentBase.h"
#include "YWidget_ItemComponentLoadoutPresetState.generated.h"

class UYControllerLoadoutPresetComponent;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemComponentLoadoutPresetState : public UYWidget_ItemComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadoutPresetItemStateSet OnLoadoutPresetItemStateSet;

    UYWidget_ItemComponentLoadoutPresetState();

    UFUNCTION(BlueprintCallable)
    void UpdateLoadoutPresetItemState(UYControllerLoadoutPresetComponent* loadoutPresetComponent, bool successful, EYPurchaseWeaponShopItemStatus responseStatus);

};
