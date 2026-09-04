#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineBaseTypes.h"
#include "Engine/Engine.h"
#include "EYInterruptionCause.h"
#include "EYPlayerInitializationType.h"
#include "YInterruptionManager.generated.h"

class UYInterruptionManagementSettingsDataAsset;
class UYInterruptionManager;

UCLASS(Blueprintable)
class PROSPECT_API UYInterruptionManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInterruptionStateChangedSignature, EYInterruptionCause, interruptionCause, bool, newState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInterruptionRetryLoginTimerSetSignature);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInterruptionClearedSignature);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnActivateMaintenanceScreenSignature);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnActivateClientUpdateScreenSignature);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInterruptionStateChangedSignature OnInterruptionStateChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInterruptionClearedSignature OnInterruptionClearedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInterruptionRetryLoginTimerSetSignature OnInterruptionRetryLoginTimerSetEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UYInterruptionManagementSettingsDataAsset* m_interruptionManagementSettings;
    
public:
    UYInterruptionManager();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float RetryLoginTimeRemaining();
    
    UFUNCTION(BlueprintCallable)
    void PlayerMovementMaxSavedMovesHit();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSignalRReconnecting();
    
    UFUNCTION(BlueprintCallable)
    void OnSignalRReady();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayfabMessageProcessedSuccessfullyCallback();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayfabMessageErrorCallback(int32 httpErrorCode, const FString& errorMessage);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerTypeInitializedCallback(EYPlayerInitializationType playerInitializationType);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerInitializationCompleteCallback();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    void OnMapLoadedCallback(FWorldContext& WorldContext, const FURL& URL, float loadDuration);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnAzureFunctionSuccesfullCallback();
    
    UFUNCTION(BlueprintCallable)
    void OnAzureFunctionErrorCallback(int32 httpErrorCode, const FString& errorMessage);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInterruptionStateActive(EYInterruptionCause interruptionCause) const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UYInterruptionManager* GetInterruptionManager(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHasTravelledBecauseOfInterrupt() const;
    
    UFUNCTION(BlueprintCallable)
    void DEBUGSetServerCrash(bool newState);
    
private:
    UFUNCTION(BlueprintCallable)
    void CheckPlayerSoftLocked();
    
};

