#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YEomInventoryData.h"
#include "YInteractionUpdateData.h"
#include "YPlayerActivityTrackerInterface.h"
#include "YControllerTrackerInventoryComponent.generated.h"

class AActor;
class UYControllerTrackerInventoryComponent;
class UYStateInventoryComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYControllerTrackerInventoryComponent : public UActorComponent, public IYPlayerActivityTrackerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<uint32> m_AlreadyLootedContainerIDs;

public:
    UYControllerTrackerInventoryComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnEndOfMatchDataAvailable(const FYEomInventoryData& Data);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleInventoryOrStashChange(UYStateInventoryComponent* stateInventoryComponent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYControllerTrackerInventoryComponent* FindControllerTrackingInventoryComponentChecked(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYControllerTrackerInventoryComponent* FindControllerTrackingInventoryComponent(AActor* actorContext);
    
private:
    UFUNCTION(BlueprintCallable)
    void CheckContainerOpened(const FYInteractionUpdateData& Data);


    // Fix for true pure virtual functions not being implemented
};

