#pragma once
#include "CoreMinimal.h"
#include "YInventoryItem.h"
#include "YUIWeaponAmmoData.h"
#include "YWidget_ItemComponentBase.h"
#include "YWidget_ItemComponentSetItem.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemComponentSetItem : public UYWidget_ItemComponentBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnSetItemDetailView, FYInventoryItem, Item);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemComponentAmmoSet, const FText&, ammoText);
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnSetItemDetailView OnSetItemDetailView;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemComponentAmmoSet OnComponentAmmoSet;
    
    UYWidget_ItemComponentSetItem();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetWeaponCounters(const FYUIWeaponAmmoData& uiWeaponAmmoData);
    
};

