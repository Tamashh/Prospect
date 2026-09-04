#pragma once
#include "CoreMinimal.h"
#include "EYLoginResult.h"
#include "YScreenBase.h"
#include "Templates/SubclassOf.h"
#include "YMenuScreenEntry.generated.h"

UCLASS(Blueprintable)
class UYMenuScreenEntry : public UYScreenBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYScreenBase> m_homeScreenBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYScreenBase> m_newLoginBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYScreenBase> m_legalAgreementsScreenBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYScreenBase> m_serverUnavailableScreenBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UYScreenBase> m_clientUpdateScreenBP;
    
public:
    UYMenuScreenEntry();

private:
    UFUNCTION(BlueprintCallable)
    void ShowLoginQueueWBP(int32 loginQueuePosition);
    
    UFUNCTION(BlueprintCallable)
    void ShowAutoDetectNotification();
    
public:
    UFUNCTION(BlueprintCallable)
    static void SetShouldShowWelcomeModal(bool shouldShowWelcomeModal);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMaintenanceModeStateResponse(bool State, const FString& Error);
    
    UFUNCTION(BlueprintCallable)
    void OnClientUpdateResponse();
    
    UFUNCTION(BlueprintCallable)
    void OnAutoLoginResponse(EYLoginResult loginResult);
    
    UFUNCTION(BlueprintCallable)
    void OnAutoDetectGraphicsSettingsDeclined();
    
    UFUNCTION(BlueprintCallable)
    void OnAutoDetectGraphicsSettingsAccepted();
    
    UFUNCTION(BlueprintCallable)
    void AutoDetectGraphicsSettings();
    
};

