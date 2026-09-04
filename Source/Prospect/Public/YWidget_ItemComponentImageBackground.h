#pragma once
#include "CoreMinimal.h"
#include "YWidget_ItemComponentBase.h"
#include "YWidget_ItemComponentImageBackground.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_ItemComponentImageBackground : public UYWidget_ItemComponentBase {
    GENERATED_BODY()
public:
    UYWidget_ItemComponentImageBackground();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_Update(const bool canCraft);
    
};

