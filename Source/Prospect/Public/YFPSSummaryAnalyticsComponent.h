#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EYPlayerMatchFinishedResult.h"
#include "EYPlayerMatchState.h"
#include "EYSessionEventType.h"
#include "YAnalyticsHardwareStats.h"
#include "YFPSSummaryAnalyticsComponent.generated.h"

class AYPlayerState;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYFPSSummaryAnalyticsComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYAnalyticsHardwareStats m_cachedClientHardwareAnalytics;
    
public:
    UYFPSSummaryAnalyticsComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TryFinishCaptureDueEngineShutdown();
    
    UFUNCTION(BlueprintCallable)
    void SetupServerCaptureDelegates();
    
    UFUNCTION(BlueprintCallable)
    void SetupClientCaptureDelegates();
    
    UFUNCTION(BlueprintCallable)
    void OnPreloadMap(const FString& mapName);
    
    UFUNCTION(BlueprintCallable)
    void OnPreGC();
    
    UFUNCTION(BlueprintCallable)
    void OnPostGC();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerMatchStateChanged(EYPlayerMatchState newState, AYPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerMatchFinishedResult(EYPlayerMatchFinishedResult matchFinishedResult);
    
    UFUNCTION(BlueprintCallable)
    void OnCompletedSessionState(EYSessionEventType newState);
    
};

