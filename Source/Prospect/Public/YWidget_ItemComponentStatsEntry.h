#pragma once
#include "CoreMinimal.h"
#include "EYItemStatsType.h"
#include "YInventoryItem.h"
#include "YStatsTypeDataEntry.h"
#include "YWidget_ItemComponentBase.h"
#include "YWidget_ItemComponentStatsEntry.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemComponentStatsEntry : public UYWidget_ItemComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYInventoryItem m_itemToCompare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYInventoryItem m_relatedInventoryItem;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYItemStatsType m_statsType;
    
public:
    UYWidget_ItemComponentStatsEntry();

private:
    UFUNCTION(BlueprintCallable)
    void OnInspectedInventoryItemUpdatedCallback(FYInventoryItem newInspectedInventoryItem);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowStatPossibleRange(float minPossibleValue, float maxPossibleValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowPlayerItemAbsoluteValue(float absoluteValue);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnStatsNumberSet(FYStatsTypeDataEntry statTypeDataEntry);
    
};

