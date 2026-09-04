#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"
#include "EYRootZLayer.h"
#include "Templates/SubclassOf.h"
#include "YWidget.generated.h"

class UWidgetAnimation;
class UYScreenSystemRoot;
class UYWidget;
class UYWidgetController;

UCLASS(Blueprintable, EditInlineNew)
class SCREENSYSTEM_API UYWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYAnimateVisibilityFinishedSignature, UYWidget*, Widget, ESlateVisibility, newVisibility);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FWidgetStatusChangeSignature);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYWidgetController> m_controllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility m_shownVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility m_hiddenVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_shouldOverrideRootZLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYRootZLayer m_rootZLayerOverride;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYWidgetController* m_controller;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYScreenSystemRoot* m_screenSystemRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_shouldHandleInput;
    
public:
    UYWidget();

protected:
    UFUNCTION(BlueprintCallable)
    bool TriggerEscMenu(bool forceEscapeMenu);
    
public:
    UFUNCTION(BlueprintCallable)
    void ToggleVisibility();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPendingVisibility(ESlateVisibility newPendingVisibility, bool atConstruct);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetController(UYWidgetController* newController);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RefreshConstructData();
    
    UFUNCTION(BlueprintCallable)
    void OnAnimateVisibilityFinished();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleBackKey();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESlateVisibility GetPendingVisibility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UYWidgetController* GetController() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnWidgetShown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnWidgetHidden();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BP_HandleTabKey();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BP_HandleConfirmInput();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BP_HandleBackKey();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ExecuteBackButtonLogic();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UWidgetAnimation* BP_AnimateVisibility(ESlateVisibility newVisibility);
    
public:
    UFUNCTION(BlueprintCallable)
    UWidgetAnimation* AnimateVisibility(ESlateVisibility newVisibility);
    
    UFUNCTION(BlueprintCallable)
    void ActivateInputForUmg(bool isActivate, UYWidget* focusedWidget, bool isUIOnly);
    
};

