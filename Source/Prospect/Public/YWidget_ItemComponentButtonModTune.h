#pragma once
#include "CoreMinimal.h"
#include "EYModificationSlotType.h"
#include "EYItemRarityType.h"
#include "YWidget_ItemComponentBase.h"
#include "YWidget_ItemComponentButtonModTune.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemComponentButtonModTune : public UYWidget_ItemComponentBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGotEnoughResourcesForTune);
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGotEnoughResourcesForTune OnItemAndItemIdSet;
    
public:
    UYWidget_ItemComponentButtonModTune();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void TuneButtonClicked(const EYModificationSlotType slotType, const EYItemRarityType modkitRarity) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetTuneButtonStatus(const EYModificationSlotType slotType, const EYItemRarityType modkitRarity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ResetButtonStatus();
    
};

