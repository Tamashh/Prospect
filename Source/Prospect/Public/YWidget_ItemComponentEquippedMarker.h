#pragma once
#include "CoreMinimal.h"
#include "YCustomItemInfo.h"
#include "YWidget_ItemComponentBase.h"
#include "YWidget_ItemComponentEquippedMarker.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemComponentEquippedMarker : public UYWidget_ItemComponentBase {
    GENERATED_BODY()
public:
    UYWidget_ItemComponentEquippedMarker();

private:
    UFUNCTION(BlueprintCallable)
    void HandleModSlotUpdated(const FYCustomItemInfo& updatedCustomId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetSlotIdx(const int32 slotIdx);
    
};

