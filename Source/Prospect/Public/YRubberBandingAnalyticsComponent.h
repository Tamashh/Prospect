#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EYPlayerMatchFinishedResult.h"
#include "YRubberBandingAnalyticsComponent.generated.h"

class APawn;
class APlayerState;
class AYPlayerCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYRubberBandingAnalyticsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYRubberBandingAnalyticsComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void SetupServerBinding();
    
    UFUNCTION(BlueprintCallable)
    void SetupClientBinding();
    
    UFUNCTION(BlueprintCallable)
    void ServerOnPawnAssignedCallback(APawn* oldPawn, APawn* newPawn);
    
    UFUNCTION(BlueprintCallable)
    void ServerOnClientMovementCorrectionCallback();
    
    UFUNCTION(BlueprintCallable)
    void SendServerAnalyticsData();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerStateSetCallback(APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerJoinedCallback(APlayerState* PlayerState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerCharacterAssigned(AYPlayerCharacter* playerCharacter);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFinishedMatchResultCallback(EYPlayerMatchFinishedResult Result);
    
    UFUNCTION(BlueprintCallable)
    void ClientOnPawnAssignedCallback(APawn* oldPawn, APawn* newPawn);
    
    UFUNCTION(BlueprintCallable)
    void ClientOnClientMovementCorrectionCallback();
    
};

