#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineBaseTypes.h"
#include "YAzureFunctionResult.h"
#include "EYServicePingTypes.h"
#include "EYTravelInstanceType.h"
#include "EYTravelState.h"
#include "YOnMatchmakingResultDelegate.h"
#include "YOnMatchmakingStatusUpdateDelegate.h"
#include "YOnReconnectTraveInitiatedDelegate.h"
#include "YOnTravelStateChangedDelegate.h"
#include "YTravelRequestData.h"
#include "YControllerTravelComponent.generated.h"

class UNetDriver;
class UObject;
class UWorld;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYControllerTravelComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYTravelRequestData m_currentTravelRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYTravelState m_currentTravelState;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnTravelStateChanged OnTravelStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnMatchmakingStatusUpdate OnMatchmakingStatusUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnReconnectTraveInitiated OnReconnectTravelInitiated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnMatchmakingResult OnMatchmakingResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_requestScreenChangeOnLogin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_requestedMatchConnection;
    
    UYControllerTravelComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void WaitingForMatchmakingSignalREventTimedOut();
    
public:
    UFUNCTION(BlueprintCallable)
    void TryTravelToSession(const FString& SessionId, int32 retryCounter, bool isReconnect);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRequestTravel(const FYTravelRequestData& Data);
    
    UFUNCTION(BlueprintCallable)
    void OnTimeoutRequestSingleplayerStation();
    
    UFUNCTION(BlueprintCallable)
    void OnPingTypeComplete(EYServicePingTypes Type);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnNetworkFailure(UWorld* InWorld, UNetDriver* NetDriver, TEnumAsByte<ENetworkFailure::Type> FailureType, const FString& errorString);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMatchMakingResultReceived(EYTravelInstanceType Type, const FYAzureFunctionResult& azureResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EYTravelState FindCurrentTravelState(UObject* objCtx);
    
    UFUNCTION(BlueprintCallable)
    static bool ExecuteTravel(UObject* objCtx, const FYTravelRequestData& Data);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRequestTravel(const FYTravelRequestData& Data);
    
};

