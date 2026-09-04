#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EYLootSourceType.h"
#include "EYMeshViewState.h"
#include "OnBagMeshChangedSignatureDelegate.h"
#include "YActiveBagData.h"
#include "YInventoryItem.h"
#include "YPickupItem.h"
#include "YCharacterBagComponent.generated.h"

class AActor;
class AController;
class AYPickupActor;
class UMeshComponent;
class UYHealthComponent;
class UYPlayerDropComponent;
class UYStateInventoryComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYCharacterBagComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBagMeshChangedSignature OnBagMeshChangedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMeshComponent*> m_bagMeshes;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ActiveBagData, meta=(AllowPrivateAccess=true))
    FYActiveBagData m_activeBagData;
    
public:
    UYCharacterBagComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetActiveBagForStation(const FYInventoryItem& bag);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveBagData();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnControllerChanged(AController* Controller);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnPlayerSetUpdated(UYStateInventoryComponent* stateInventoryComponent);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnMeshViewStateChanged(EYMeshViewState newViewState);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnMeshLoaded();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnLootCreated(const FYPickupItem& pickupItem, AYPickupActor* pickUpActor);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnDropItem(UYPlayerDropComponent* playerDropComponent, const FYInventoryItem& Item, EYLootSourceType lootType);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnDeath(UYHealthComponent* healthComponent, AActor* Instigator);
    
};

