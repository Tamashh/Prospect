#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YFullscreenScopeData.h"
#include "YWidget_FullScreenCrosshair.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_FullScreenCrosshair : public UYWidget {
    GENERATED_BODY()
public:
    UYWidget_FullScreenCrosshair();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_SetData(FYFullscreenScopeData newData);
    
};

