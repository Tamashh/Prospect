#pragma once
#include "CoreMinimal.h"
#include "EYVanityViewDialogOptions.h"
#include "YWidgetView.h"
#include "YWidget_Vanity_View.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_Vanity_View : public UYWidgetView {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYVanityViewDialogOptions m_lastViewOption;
    
public:
    UYWidget_Vanity_View();

private:
    UFUNCTION(BlueprintCallable)
    bool ShowModalDialog(EYVanityViewDialogOptions Type);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnKeepChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnCancelCustomization();
    
    UFUNCTION(BlueprintCallable)
    void OnAcceptDisregardChanges();
    
    UFUNCTION(BlueprintCallable)
    void OnAcceptCustomization();
    
private:
    UFUNCTION(BlueprintCallable)
    bool CancelActiveModalDialog();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnOnDecline(EYVanityViewDialogOptions Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnAccept(EYVanityViewDialogOptions Type);
    
};

