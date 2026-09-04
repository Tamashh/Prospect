#pragma once
#include "CoreMinimal.h"
#include "YScreenBase.h"
#include "Templates/SubclassOf.h"
#include "YMenuScreenLegalAgreements.generated.h"

class UYAuthorization;

UCLASS(Blueprintable)
class UYMenuScreenLegalAgreements : public UYScreenBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYScreenBase> m_homeScreenBP;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYAuthorization* m_authorization;
    
public:
    UYMenuScreenLegalAgreements();

private:
    UFUNCTION(BlueprintCallable)
    void ShowAutoDetectNotification();
    
    UFUNCTION(BlueprintCallable)
    void OnCofirmRejectingLegal();
    
    UFUNCTION(BlueprintCallable)
    void OnAutoDetectGraphicsSettingsDeclined();
    
    UFUNCTION(BlueprintCallable)
    void OnAutoDetectGraphicsSettingsAccepted();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAgreementDecision(bool userAgreed);
    
private:
    UFUNCTION(BlueprintCallable)
    void AutoDetectGraphicsSettings();
    
};

