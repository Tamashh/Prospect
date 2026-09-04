#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YFpsData.h"
#include "YWidget_FpsCounter.generated.h"

class UYUserSettings;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_FpsCounter : public UYWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UYUserSettings> m_userSettings;
    
public:
    UYWidget_FpsCounter();

    UFUNCTION(BlueprintCallable)
    void OnSettingsApplied();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnFpsDataUpdated(FYFpsData fpsData);
    
};

