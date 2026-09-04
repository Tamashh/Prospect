#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_LoginRegister.generated.h"

class UWidget;
class UWidgetAnimation;
class UYWidget_Login;
class UYWidget_Register;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_LoginRegister : public UYWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRegisterButtonClickedSignature);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAnimatedOutSignature);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAnimatedInSignature);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FBackButtonClickedSignature);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget* m_invalidGameLaunchWidget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* m_loadingWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_Login* m_loginWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_Register* m_registerWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_animateInAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_animateOutAnimation;
    
public:
    UYWidget_LoginRegister();

private:
    UFUNCTION(BlueprintCallable)
    void OnAnimateOutFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnAnimateInFinished();
    
    UFUNCTION(BlueprintCallable)
    void HandleRegisterWidgetGoBackRequest();
    
    UFUNCTION(BlueprintCallable)
    void HandleLoginWidgetOnRegister();
    
public:
    UFUNCTION(BlueprintCallable)
    UYWidget_Register* GetRegisterWidget() const;
    
    UFUNCTION(BlueprintCallable)
    UYWidget_Login* GetLoginWidget() const;
    
    UFUNCTION(BlueprintCallable)
    UWidget* GetLoadingWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ShowLoginQueueWBP(int32 loginQueuePosition);
    
};

