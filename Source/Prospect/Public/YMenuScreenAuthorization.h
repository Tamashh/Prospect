#pragma once
#include "CoreMinimal.h"
#include "YScreenBase.h"
#include "Templates/SubclassOf.h"
#include "YMenuScreenAuthorization.generated.h"

UCLASS(Blueprintable)
class UYMenuScreenAuthorization : public UYScreenBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYScreenBase> m_homeScreenBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYScreenBase> m_clientUpdateScreenBP;
    
public:
    UYMenuScreenAuthorization();

private:
    UFUNCTION(BlueprintCallable)
    void ShowAutoDetectNotification();
    
    UFUNCTION(BlueprintCallable)
    void OnLegalAgreementAccepted();
    
    UFUNCTION(BlueprintCallable)
    void OnInterruptionEncountered();
    
    UFUNCTION(BlueprintCallable)
    void OnClientUpdate();
    
    UFUNCTION(BlueprintCallable)
    void OnAutoDetectGraphicsSettingsDeclined();
    
    UFUNCTION(BlueprintCallable)
    void OnAutoDetectGraphicsSettingsAccepted();
    
    UFUNCTION(BlueprintCallable)
    void OnAuthenticationStateChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnAuthenticationFinished();
    
    UFUNCTION(BlueprintCallable)
    void AutoDetectGraphicsSettings();
    
};

