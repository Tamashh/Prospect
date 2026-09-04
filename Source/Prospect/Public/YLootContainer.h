#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EYLootContainerWidgetType.h"
#include "EYPlayerSetType.h"
#include "OnContainerClosedSignatureDelegate.h"
#include "OnContainerOpenedSignatureDelegate.h"
#include "YInventoryItem.h"
#include "YInventoryItemChangedInterface.h"
#include "YPickupActor.h"
#include "YPlayerDataSet.h"
#include "YPlayerInventory.h"
#include "YLootContainer.generated.h"

class AYPlayerState;
class UYControllerInventoryInteractionComponent;
class UYStateInventoryComponent;

UCLASS(Blueprintable)
class PROSPECT_API AYLootContainer : public AYPickupActor, public IYInventoryItemChangedInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnContainerOpenedSignature OnContainerOpenedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnContainerClosedSignature OnContainerClosedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_maxInventoryWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AYPlayerState*> m_interactingPlayerStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYStateInventoryComponent* m_inventoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYLootContainerWidgetType m_lootContainerWidgetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_maxItemInstancesInContainer;
    
public:
    AYLootContainer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString ToDebugString() const;
    
    UFUNCTION(BlueprintCallable)
    void SetItemOverride(const FYInventoryItem& Item);
    
    UFUNCTION(BlueprintCallable)
    void SetInventoryFromLootListRoll(FDataTableRowHandle lootListRollRowHandle);
    
    UFUNCTION(BlueprintCallable)
    void SetInventory(const FYPlayerInventory& newInventory, const FYPlayerDataSet& newSet);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnContainerInteractionCancelled(UYControllerInventoryInteractionComponent* inventoryInteractionComponent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyInteractionFinished(UYControllerInventoryInteractionComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    bool MoveItemsBack(UYStateInventoryComponent* interactingPlayerStateInventoryComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxItemInstancesInContainer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetMaxInventoryWeight();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYPlayerInventory GetInventory() const;
    
    UFUNCTION(BlueprintCallable)
    void CreateItemAddToLootContainer(const FDataTableRowHandle& itemRowHandle, const int32 Amount, TArray<FYInventoryItem>& outCreatedItems, const EYPlayerSetType Slot);
    
    UFUNCTION(BlueprintCallable)
    void ClearInventory();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanInteractWithLootContainer();
    
    UFUNCTION(BlueprintCallable)
    void AddItemToLootContainerPlayerSet(const FYInventoryItem& Item, EYPlayerSetType Slot);
    

    // Fix for true pure virtual functions not being implemented
};

