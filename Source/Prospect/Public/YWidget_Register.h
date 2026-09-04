#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "YWidget_Register.generated.h"

class UButton;
class UEditableTextBox;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_Register : public UYWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FRegisterButtonClickedDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FBackButtonClickedDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRegisterButtonClickedDelegate OnRegister;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBackButtonClickedDelegate OnGoBackRequest;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableTextBox* m_passwordTextBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableTextBox* m_repeatPasswordTextBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableTextBox* m_usernameTextBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* m_registerButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* m_backButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_errorTextBlock;
    
public:
    UYWidget_Register();

private:
    UFUNCTION(BlueprintCallable)
    void HandleGoBack();
    
};

