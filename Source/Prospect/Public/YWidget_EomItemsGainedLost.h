#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YEomInventoryData.h"
#include "YWidget_EomItemsGainedLost.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_EomItemsGainedLost : public UYWidget {
    GENERATED_BODY()
public:
    UYWidget_EomItemsGainedLost();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPlayerInventoryChangesAtEoMShown(const FYEomInventoryData& eomInventoryData);
    
};

