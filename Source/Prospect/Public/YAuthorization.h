#pragma once
#include "CoreMinimal.h"
#include "EYLoginResult.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "EYAuthorizationUsageType.h"
#include "YAuthorization.generated.h"

class UYAuthorization;
class UYPlayfabInstance;

UCLASS(Blueprintable)
class UYAuthorization : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAuthServerRegisteredDelegate, bool, Result, const FString&, Error);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAuthServerReceivedMaintenanceModeState, bool, Result, const FString&, Error);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAuthServerLoginResultDelegate, EYLoginResult, loginResult);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAuthServerRegisteredDelegate OnRegistered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAuthServerLoginResultDelegate OnAuthServerLoginResult;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAuthServerReceivedMaintenanceModeState OnMaintenanceModeStateReceived;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_authBaseUrlSteam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_authBaseUrlEos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYPlayfabInstance* m_playfabInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle m_timerHandle;
    
public:
    UYAuthorization();

    UFUNCTION(BlueprintCallable)
    bool TryAutoLogin();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayfabLoginDone(bool success, const FString& loginError, const FString& playfabTitleId);
    
public:
    UFUNCTION(BlueprintCallable)
    bool Login(const FString& NewLogin, const FString& Password, const FString& authType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isConnected() const;
    
    UFUNCTION(BlueprintCallable)
    static UYAuthorization* GetInstance(UObject* objectContext);
    
    UFUNCTION(BlueprintCallable)
    EYAuthorizationUsageType GetAuthorizationType();
    
};

