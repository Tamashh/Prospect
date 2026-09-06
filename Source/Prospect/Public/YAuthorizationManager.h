#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "YAzureFunctionResult.h"
#include "EYAuthorizationState.h"
#include "YAuthorizationManager.generated.h"

class UYAuthorizationManager;
class UYPlayfabInstance;

UCLASS(Blueprintable)
class UYAuthorizationManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAuthorizationStateChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAuthorizationFinished);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAuthorizationFinished OnAuthorizationFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAuthorizationStateChanged OnAuthorizationStateChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYAuthorizationState m_currentAuthorizationState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYPlayfabInstance* m_playfabInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime m_loginQueueTimeStamp;
    
public:
    UYAuthorizationManager();

    UFUNCTION(BlueprintCallable)
    static void StopTimerAndContinueLogin_DEVELOPMENT(const UObject* objectContext);

private:
    UFUNCTION(BlueprintCallable)
    void OnSeasonWipeCheckResponse(const FYAzureFunctionResult& azureResult);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestRollbackCheckResponse(const FYAzureFunctionResult& azureResult);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestMaintenanceModeStateResponse(const FYAzureFunctionResult& azureResult);
    
    UFUNCTION(BlueprintCallable)
    void OnRequestLoginQueueStateResponse(const FYAzureFunctionResult& azureResult);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayFabLoginComplete(bool isSuccess, const FString& loginError, const FString& playfabTitleId);
    
    UFUNCTION(BlueprintCallable)
    void OnNewLegalAgreementsUpdateResponse(const FYAzureFunctionResult& azureResult);
    
    UFUNCTION(BlueprintCallable)
    void OnClientUpdateResponse(const FYAzureFunctionResult& azureResult);
    
    UFUNCTION(BlueprintCallable)
    void OnCheckIfCanGoToStationFromQueue(const FYAzureFunctionResult& azureResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCompletelyAuthorized(const UObject* objectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCurrentLoginQueuePosition(const UObject* objectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EYAuthorizationState GetCurrentAuthorizationState(const UObject* objectContext);
    
    UFUNCTION(BlueprintCallable)
    static UYAuthorizationManager* GetAuthorizationManager(const UObject* objectContext);
    
    UFUNCTION(BlueprintCallable)
    static void ContinueLogin(const UObject* objectContext);
    
};

