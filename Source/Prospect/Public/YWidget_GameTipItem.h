#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YGameTipRow.h"
#include "YWidget_GameTipItem.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_GameTipItem : public UYWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FQueueItemDelegate);
    
    UYWidget_GameTipItem();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowItemData(const FYGameTipRow& Data);
    
};

