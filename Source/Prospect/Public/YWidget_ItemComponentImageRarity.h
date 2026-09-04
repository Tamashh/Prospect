#pragma once
#include "CoreMinimal.h"
#include "EYItemRarityType.h"
#include "YWidget_ItemComponentBase.h"
#include "YWidget_ItemComponentImageRarity.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemComponentImageRarity : public UYWidget_ItemComponentBase {
    GENERATED_BODY()
public:
    UYWidget_ItemComponentImageRarity();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnOfferRarityUpdated(const EYItemRarityType rarity);
    
};

