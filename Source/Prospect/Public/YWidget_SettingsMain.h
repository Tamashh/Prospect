#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YInputStackInterface.h"
#include "YWidget_SettingsMain.generated.h"

class UButton;
class UYUserSettings;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_SettingsMain : public UYWidget, public IYInputStackInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* m_closeButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* m_applyButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* m_restoreDefaultsButton;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYUserSettings* m_userSettings;
    
public:
    UYWidget_SettingsMain();

protected:
    UFUNCTION(BlueprintCallable)
    void OnRestoreDefaultsRequest();
    
    UFUNCTION(BlueprintCallable)
    void OnCancelRequest();
    
    UFUNCTION(BlueprintCallable)
    void OnApplyRequest();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnClose();
    

    // Fix for true pure virtual functions not being implemented
};

