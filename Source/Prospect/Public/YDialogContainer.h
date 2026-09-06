#pragma once
#include "CoreMinimal.h"
#include "EYLoginResult.h"
#include "YDialogContainerBase.h"
#include "EYReportType.h"
#include "YDialogContainer.generated.h"

class UYWidget_ConfirmationModal;
class UYWidget_ConnectionLost;
class UYWidget_ModalDialogExitGame;
class UYWidget_ModalDialogOKCancelItem;
class UYWidget_ModalDialogOkCancel;
class UYWidget_ModalDialogShopOfferPurchase;

UCLASS(Blueprintable, EditInlineNew)
class UYDialogContainer : public UYDialogContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ModalDialogOKCancelItem* m_modalDialogOkCancelItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ModalDialogOkCancel* m_notificationWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ModalDialogShopOfferPurchase* m_shopOfferPurchaseModalDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ModalDialogExitGame* m_exitGameModalDialog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ConnectionLost* m_connectionLostWidget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYReportType m_reportType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_connectionTimerIntervalSeconds;
    
public:
    UYDialogContainer();

    UFUNCTION(BlueprintCallable)
    void ShowPlayerSupportWidget(bool newState);
    
    UFUNCTION(BlueprintCallable)
    void ShowLoadingOverlay(const FText& Message);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnToggleQuickMenuVisiblity(bool newVisibility);

public:
    UFUNCTION(BlueprintCallable)
    void OnShowPlayerDialogSupportMessage(const FText headline, const FText Message, const FText buttonText);
    
    UFUNCTION(BlueprintCallable)
    void InitializeNewsScreen();
    
    UFUNCTION(BlueprintCallable)
    void HideLoadingOverlay();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleConnectionRestored(EYLoginResult loginResult);
    
    UFUNCTION(BlueprintCallable)
    void HandleConnectionLost();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowWelcomeModal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowToastMessage(const FText& primaryText, const FText& secondaryText, bool successful);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowNewsScreen(int32 Index, bool hasLoginBonus, bool autoOpen);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowLoadingOverlay(const FText& Message);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowCustomerSupportWidget();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget_ConfirmationModal* BP_RequestDialogOKAndCancel(const FText& headline, const FText& Message, const FText& okButtonText, const FText& cancelButtonText, const FText& warningMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget_ConfirmationModal* BP_RequestDialogExitGameAlternative();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HideNewsScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HideLoadingOverlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UYWidget_ConfirmationModal* BP_GetDialogOKAndCancelModal();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BP_CloseDialogContainers();
    
};

