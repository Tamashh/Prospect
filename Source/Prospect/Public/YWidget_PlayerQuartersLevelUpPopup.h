#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_PlayerQuartersLevelUpPopup.generated.h"

UCLASS(Blueprintable, EditInlineNew, Config=Game)
class UYWidget_PlayerQuartersLevelUpPopup : public UYWidget {
    GENERATED_BODY()
public:
    UYWidget_PlayerQuartersLevelUpPopup();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_StartPopupAnimation();
    
};

