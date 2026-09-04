#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EYStateChangeType.h"
#include "YDealtDamageData.h"
#include "YCheatReportingComponent.generated.h"

class AYPlayerState;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYCheatReportingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYCheatReportingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnPlayerStateChanged(EYStateChangeType stateChange);
    
    UFUNCTION(BlueprintCallable)
    void OnPickRandomTeleportingPlace();
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerGotDamaged(const FYDealtDamageData& Data);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerDealDamage(const FYDealtDamageData& Data);
    
    UFUNCTION(BlueprintCallable)
    void OnMatchFinishedResult(AYPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void OnDeath();
    
};

