#pragma once
#include "CoreMinimal.h"
#include "EYItemType.h"
#include "Components/ActorComponent.h"
#include "EYPlayerSetType.h"
#include "YInventoryInfo.h"
#include "YInventoryItem.h"
#include "YInventorySnapshot.h"
#include "YModEntry.h"
#include "YPlayerDataSet.h"
#include "YPlayerInventory.h"
#include "YRuntimeInventoryWeightInfo.h"
#include "YStateInventoryComponent.generated.h"

class AActor;
class UYStateInventoryComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYStateInventoryComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYStateInventoryUpdatedSignature, UYStateInventoryComponent*, stateInventoryComponent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYStateInventoryGPAUpdatedSignature, UYStateInventoryComponent*, stateInventoryComponent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FYPlayerStashModSignature, UYStateInventoryComponent*, stateInventoryComponent, const FYInventoryItem&, device, const FYModEntry&, mod);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYPlayerStashItemSignature, UYStateInventoryComponent*, stateInventoryComponent, const FYInventoryItem&, Item);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FYPlayerSetModSignature, UYStateInventoryComponent*, stateInventoryComponent, const FYInventoryItem&, device, const FYModEntry&, mod);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FYPlayerSetItemSignature, UYStateInventoryComponent*, stateInventoryComponent, const FYInventoryItem&, Item, EYPlayerSetType, equippedSetType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FYPlayerSetItemMovedSignature, UYStateInventoryComponent*, stateInventoryComponent, const FYInventoryItem&, Item, EYPlayerSetType, originSetType, EYPlayerSetType, targetSetType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FYPlayerItemSwapPerformed, UYStateInventoryComponent*, stateInventoryComponent, const FYInventoryItem&, Item, EYPlayerSetType, originSetType, EYPlayerSetType, targetSetType);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isSlotInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYItemType> m_allowedTargetItemTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYPlayerSetType> m_allowedOriginPlayerSetTypes;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYStateInventoryUpdatedSignature OnInventoryInfoUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYStateInventoryUpdatedSignature OnPlayerInventoryUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYStateInventoryGPAUpdatedSignature OnPlayerInventoryGPAUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYStateInventoryUpdatedSignature OnPlayerStashUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYStateInventoryUpdatedSignature OnPlayerSetUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerSetItemSignature OnPlayerSetItemAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerSetItemSignature OnPlayerSetItemAddedEffect;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerSetModSignature OnPlayerSetModEquippedEffect;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerSetItemSignature OnPlayerSetItemUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerSetItemSignature OnPlayerSetItemRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerSetItemMovedSignature OnPlayerSetItemMoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerStashItemSignature OnPlayerStashItemAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerStashItemSignature OnPlayerStashItemAddedEffect;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerStashModSignature OnPlayerStashModEquippedEffect;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerStashItemSignature OnPlayerStashItemUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerStashItemSignature OnPlayerStashItemRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerItemSwapPerformed OnPlayerItemSwapPerformed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerInventory, meta=(AllowPrivateAccess=true))
    FYPlayerInventory m_playerInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerSet, meta=(AllowPrivateAccess=true))
    FYPlayerDataSet m_playerSet;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FYInventorySnapshot m_serverSnapshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_InventoryInfo, meta=(AllowPrivateAccess=true))
    FYInventoryInfo m_inventoryInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FYPlayerInventory m_predictedPlayerInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FYPlayerDataSet m_predictedPlayerSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerInventory m_playerStash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ComponentID, meta=(AllowPrivateAccess=true))
    int32 m_componentId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FYRuntimeInventoryWeightInfo m_runtimeInventoryWeightInfo;
    
public:
    UYStateInventoryComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void SyncClientAndServerInventory();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetPlayerStash(const FYPlayerInventory& unvalidatedPlayerStash, const bool sentFromBackend);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerSet(const FYPlayerDataSet& playerSet);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerInventory(const FYPlayerInventory& unvalidatedPlayerInventory, const bool sentFromBackend);
    
    UFUNCTION(BlueprintCallable)
    void SetInventoryLocking(bool lockMovementFromToInventory);
    
    UFUNCTION(BlueprintCallable)
    void SetInventoryInfo(const FYInventoryInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    void SetComponentId(const int32 newComponentId);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerSet(const FYPlayerDataSet& previousPlayerDataSet);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerInventory(const FYPlayerInventory& previousPlayerInventory);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_InventoryInfo();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ComponentID(int32 oldComponentId);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnGPAReplicatedCallback();
    
    UFUNCTION(BlueprintCallable)
    void ItemSwapCalled(const FYInventoryItem& itemToRecord, EYPlayerSetType originSetType, EYPlayerSetType targetSetType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYInventorySnapshot GetServerDataSnapshot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYRuntimeInventoryWeightInfo GetRuntimeInventoryWeightInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYPlayerInventory GetPlayerStash() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYPlayerDataSet GetPlayerSet() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYPlayerInventory GetPlayerInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlayerBagItem(FYInventoryItem& bagItem, int32& bagIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYInventoryInfo GetInventoryInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetCustomIdsForSafePocketsItemsConsumedInMatch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetComponentId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYStateInventoryComponent* FindStateInventoryComponent(AActor* actorContext);
    
};

