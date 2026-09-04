#pragma once
#include "CoreMinimal.h"
#include "EYItemRarityType.h"
#include "YModEntry.h"
#include "YWidget_ItemComponentBase.h"
#include "YWidget_ItemComponentBaseMods.generated.h"

class UYStateInventoryComponent;
class UYWidget_ModEntry;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemComponentBaseMods : public UYWidget_ItemComponentBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UYWidget_ModEntry*> m_itemModWidgets;
    
public:
    UYWidget_ItemComponentBaseMods();

private:
    UFUNCTION(BlueprintCallable)
    void SetItemMods(UYStateInventoryComponent* stateInventoryComponent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetItemMods(const TArray<FYModEntry>& modEntries, const EYItemRarityType itemRarity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ResetItemMods();
    
};

