#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EYMatchState.h"
#include "OnTrySendingPlayerStatsEventDelegate.h"
#include "YPlayersStatsComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYPlayersStatsComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTrySendingPlayerStatsEvent BP_OnTrySendingPlayerStatsEvent;
    
public:
    UYPlayersStatsComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void ProcessEOSStats();
    
    UFUNCTION(BlueprintCallable)
    void OnMatchStateChanged(EYMatchState matchState);
    
};

