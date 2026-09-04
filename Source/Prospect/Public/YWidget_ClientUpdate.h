#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_ClientUpdate.generated.h"

UCLASS(Blueprintable, EditInlineNew, Config=Game)
class UYWidget_ClientUpdate : public UYWidget {
    GENERATED_BODY()
public:
    UYWidget_ClientUpdate();

protected:
    UFUNCTION(BlueprintCallable)
    void ExitGame();
    
};

