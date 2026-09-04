#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EYPlayerMatchState.h"
#include "YLatencyAnalyticsComponent.generated.h"

class APlayerState;
class AYPlayerState;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYLatencyAnalyticsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYLatencyAnalyticsComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetupDelegateForPlayerStateClient();
    
    UFUNCTION(BlueprintCallable)
    void SetupDelegateForPlayerState(APlayerState* PlayerState);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnPlayerMatchStateChanged(EYPlayerMatchState newState, AYPlayerState* PlayerState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnNetCleanup(APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void CaptureSampleServer();
    
    UFUNCTION(BlueprintCallable)
    void CaptureSampleClient();
    
    UFUNCTION()
    void AddLatencySample(double sample);
    
};

