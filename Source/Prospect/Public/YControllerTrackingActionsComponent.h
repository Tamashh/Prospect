#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EYPlayerMatchFinishedResult.h"
#include "YDealtDamageData.h"
#include "YControllerTrackingActionsComponent.generated.h"

class AActor;
class UYControllerTrackingActionsComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYControllerTrackingActionsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYControllerTrackingActionsComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerFinishedMatch(EYPlayerMatchFinishedResult newState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYControllerTrackingActionsComponent* FindTrackingActionsComponentChecked(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYControllerTrackingActionsComponent* FindTrackingActionsComponent(AActor* actorContext);
    
private:
    UFUNCTION(BlueprintCallable)
    void CheckIfKillRegistered(const FYDealtDamageData& damageDealt);
    
};

