#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YActivityDataTableRow.h"
#include "YGameModeUIData.h"
#include "YWidget_Objectives.generated.h"

class UYWidget_ImageBase;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_Objectives : public UYWidget {
    GENERATED_BODY()
public:
    UYWidget_Objectives();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowGameModeInfo(const FYGameModeUIData& gameModeUIData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<UYWidget_ImageBase*> BP_SetObjectiveUIData(const TArray<FYActivityDataTableRow>& objectives);
    
};

