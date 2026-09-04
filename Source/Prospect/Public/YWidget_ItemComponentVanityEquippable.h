#pragma once
#include "CoreMinimal.h"
#include "YItemUsingVanityInfo.h"
#include "YWidget_ItemComponentBase.h"
#include "YWidget_ItemComponentVanityEquippable.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemComponentVanityEquippable : public UYWidget_ItemComponentBase {
    GENERATED_BODY()
public:
    UYWidget_ItemComponentVanityEquippable();

private:
    UFUNCTION(BlueprintCallable)
    void OnVanityUpdated();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ItemsUsingThisVanity(const TArray<FYItemUsingVanityInfo>& itemsUsingThisVanity);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_AmountOfFreeUsages(int32 Amount);
    
};

