#pragma once
#include "CoreMinimal.h"
#include "ItemLockInfo.h"
#include "YWidget_ItemComponentBase.h"
#include "YWidget_ItemComponentImageFactionLock.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemComponentImageFactionLock : public UYWidget_ItemComponentBase {
    GENERATED_BODY()
public:
    UYWidget_ItemComponentImageFactionLock();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetUnlockText(FItemLockInfo Info);
    
};

