#pragma once
#include "CoreMinimal.h"
#include "YUpdatedFactionProgression.h"
#include "Components/ActorComponent.h"
#include "YActiveContractsUIData.h"
#include "YPlayerActivityTrackerInterface.h"
#include "YControllerTrackerMetaComponent.generated.h"

class AActor;
class UYControllerTrackerMetaComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYControllerTrackerMetaComponent : public UActorComponent, public IYPlayerActivityTrackerInterface {
    GENERATED_BODY()
public:
    UYControllerTrackerMetaComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYControllerTrackerMetaComponent* FindControllerTrackingMetaComponentChecked(AActor* actorContext);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYControllerTrackerMetaComponent* FindControllerTrackingMetaComponent(AActor* actorContext);

private:
    UFUNCTION(BlueprintCallable)
    void CheckFactionLevelReached(const FYUpdatedFactionProgression& uiData);

    UFUNCTION(BlueprintCallable)
    void CheckContractClaimed(const FYActiveContractsUIData& activeContractsUIData);


    // Fix for true pure virtual functions not being implemented
};
