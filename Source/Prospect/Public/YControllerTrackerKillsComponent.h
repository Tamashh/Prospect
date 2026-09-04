#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YDealtDamageData.h"
#include "YPlayerActivityTrackerInterface.h"
#include "YControllerTrackerKillsComponent.generated.h"

class AActor;
class UYControllerTrackerKillsComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYControllerTrackerKillsComponent : public UActorComponent, public IYPlayerActivityTrackerInterface {
    GENERATED_BODY()
public:
    UYControllerTrackerKillsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYControllerTrackerKillsComponent* FindControllerTrackingKillsComponentChecked(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYControllerTrackerKillsComponent* FindControllerTrackingKillsComponent(AActor* actorContext);
    
private:
    UFUNCTION(BlueprintCallable)
    void CheckIfKillRegistered(const FYDealtDamageData& damageDealt);
    

    // Fix for true pure virtual functions not being implemented
};

