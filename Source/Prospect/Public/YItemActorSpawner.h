#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "EYLootSourceType.h"
#include "OnLootCreatedDelegate.h"
#include "OnPlayerCollectedLootDelegate.h"
#include "Templates/SubclassOf.h"
#include "YItemActorSpawner.generated.h"

class ACharacter;
class AYPickupActor;
class UObject;
class UYItemActorSpawner;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYItemActorSpawner : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLootCreated BP_OnLootCreated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerCollectedLoot BP_OnPlayerCollectedLoot;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AYPickupActor> m_defaultPickupActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AYPickupActor*> m_allSpawnedPickUpActors;
    
public:
    UYItemActorSpawner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static AYPickupActor* SpawnSpecificLootItem(UObject* contextObject, const FDataTableRowHandle& pickupItem, const FTransform& SpawnTransform, int32 Amount, bool adjustSpawnLocationToGround, FVector spawnVelocity, EYLootSourceType lootType, UObject* instigatorObject, float spawnNavmeshRadiusMin, float spawnNavmeshRadiusMax);
    
    UFUNCTION(BlueprintCallable)
    bool SpawnMoneyDrop(const FDataTableRowHandle& pickupItem, ACharacter* Instigator, const FTransform& SpawnTransform, int32 Amount, EYLootSourceType Type, FVector Velocity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UYItemActorSpawner* GetItemActorSpawner(UObject* WorldContext);
    
};

