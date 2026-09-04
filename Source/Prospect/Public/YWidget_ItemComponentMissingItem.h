#pragma once
#include "CoreMinimal.h"
#include "YWidget_ItemComponentBase.h"
#include "YWidget_ItemComponentMissingItem.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemComponentMissingItem : public UYWidget_ItemComponentBase {
    GENERATED_BODY()
public:
    UYWidget_ItemComponentMissingItem();

private:
    UFUNCTION(BlueprintCallable)
    void OnShopUpdated();
    
};

