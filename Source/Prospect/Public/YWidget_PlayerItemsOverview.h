#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "EYItemImprovementScreenSlotType.h"
#include "YPlayerInventory.h"
#include "YPlayerItemUIData.h"
#include "YResourceExecutionInterface.h"
#include "YWidget_PlayerItemsOverview.generated.h"

class UYWidget_ItemContainer;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_PlayerItemsOverview : public UYWidget, public IYResourceExecutionInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemDroppedOnAreaSignature, const EYItemImprovementScreenSlotType, slotType);
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemDroppedOnAreaSignature OnItemDroppedOnAreaSignature;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UYWidget_ItemContainer*> m_itemEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FYPlayerItemUIData> m_playerItemsData;
    
public:
    UYWidget_PlayerItemsOverview();

    UFUNCTION(BlueprintCallable)
    void InitPlayerItemsOverview(const FYPlayerInventory& playerStash, const FYPlayerInventory& playerActiveInventory);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget_ItemContainer* BP_CreateAndAddItemWidgetEntry(const FYPlayerItemUIData& playerItemUIData);
    

    // Fix for true pure virtual functions not being implemented
};

