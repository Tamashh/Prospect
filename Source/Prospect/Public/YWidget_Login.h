#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "Types/SlateEnums.h"
#include "YWidget_Login.generated.h"

class UButton;
class UEditableTextBox;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_Login : public UYWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLoginActionDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoginActionDelegate OnRegister;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoginActionDelegate OnLogin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoginActionDelegate OnResetPassword;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableTextBox* m_passwordTextBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableTextBox* m_usernameTextBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* m_loginButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* m_registerButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* m_resetPasswordButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_errorTextBlock;
    
public:
    UYWidget_Login();

private:
    UFUNCTION(BlueprintCallable)
    void HandleTextCommited(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
    UFUNCTION(BlueprintCallable)
    void HandleResetPasswordClicked();
    
    UFUNCTION(BlueprintCallable)
    void HandleRegisterClicked();
    
    UFUNCTION(BlueprintCallable)
    void HandleLoginClicked();
    
};

