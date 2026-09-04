#pragma once
#include "CoreMinimal.h"
#include "EYLoginResult.h"
#include "YWidgetController.h"
#include "YWidgetController_Login.generated.h"

class UYAuthorization;

UCLASS(Blueprintable)
class UYWidgetController_Login : public UYWidgetController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYAuthorization* m_authorization;
    
public:
    UYWidgetController_Login();

protected:
    UFUNCTION(BlueprintCallable)
    void OnLoginResponse(EYLoginResult Result);
    
    UFUNCTION(BlueprintCallable)
    void OnLoginRequest();
    
};

