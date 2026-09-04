#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YInventoryItem.h"
#include "YStatsTypeDataEntry.h"
#include "YWidget_ItemComponentBase.h"
#include "YWidget_ItemComponentStatsContainer.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemComponentStatsContainer : public UYWidget_ItemComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_buildItemsFromRelatedItemHandleAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_relatedItemDataTableRow;
    
    UYWidget_ItemComponentStatsContainer();

    UFUNCTION(BlueprintCallable)
    void SetStatEntriesOutsideOfItemContainer(FYInventoryItem& Item);
    
    UFUNCTION(BlueprintCallable)
    void RefreshItems();
    
    UFUNCTION(BlueprintCallable)
    void OnInventoryChanged(const TArray<FYInventoryItem>& Inventory);
    
    UFUNCTION(BlueprintCallable)
    void CompareStatEntriesOutsideOfItemContainer(FYInventoryItem& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ItemDataEntries(FDataTableRowHandle rowHandle, const TArray<FYStatsTypeDataEntry>& Data);
    
};

