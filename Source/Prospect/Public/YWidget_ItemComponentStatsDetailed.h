#pragma once
#include "CoreMinimal.h"
#include "YDetailedStatisticsDataSettingData.h"
#include "YInventoryItem.h"
#include "YWidget_ItemComponentBase.h"
#include "YWidget_ItemComponentStatsDetailed.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemComponentStatsDetailed : public UYWidget_ItemComponentBase {
    GENERATED_BODY()
public:
    UYWidget_ItemComponentStatsDetailed();

    UFUNCTION(BlueprintCallable)
    void OnInventoryChanged(const TArray<FYInventoryItem>& Inventory);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnStatsDataUpdated(FYDetailedStatisticsDataSettingData Data);
    
};

