#pragma once
#include "CoreMinimal.h"
#include "EYPlayerSetType.h"
#include "YInventoryItem.h"
#include "YItemModsInfo.h"
#include "YWidget_ItemComponentBase.h"
#include "YWidget_ItemComponentMods.generated.h"

class UYStateInventoryComponent;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemComponentMods : public UYWidget_ItemComponentBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnModSlotDataAvailableSignature, const FYItemModsInfo&, itemModsInfo);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnModSlotDataAvailableSignature OnModSlotDataAvailableEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYInventoryItem m_parentInventoryItem;
    
    UYWidget_ItemComponentMods();

private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerStashItemUpdatedCallback(UYStateInventoryComponent* stateInventoryComponent, const FYInventoryItem& Item);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerSetItemUpdatedCallback(UYStateInventoryComponent* stateInventoryComponent, const FYInventoryItem& Item, EYPlayerSetType equippedSetType);
    
    UFUNCTION(BlueprintCallable)
    void OnParentItemSetCallback();
    
public:
    UFUNCTION(BlueprintCallable)
    void ForceRefresh();
    
};

