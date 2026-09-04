#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_GeneralGameSettings.generated.h"

class UYWidget_SettingsToggle;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_GeneralGameSettings : public UYWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_SettingsToggle* m_minimapRotationToggle;
    
    UYWidget_GeneralGameSettings();

    UFUNCTION(BlueprintCallable)
    void ApplyPendingSettings();
    
};

