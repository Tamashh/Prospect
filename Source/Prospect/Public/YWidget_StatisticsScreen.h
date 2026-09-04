#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_StatisticsScreen.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_StatisticsScreen : public UYWidget {
    GENERATED_BODY()
public:
    UYWidget_StatisticsScreen();

private:
    UFUNCTION(BlueprintCallable)
    void OnPlayfabStatisticsFetched();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PlayfabStatsFetched();
    
};

