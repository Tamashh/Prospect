#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "EYPlayerSetType.h"
#include "OnInventoryFullOnPickupDelegateDelegate.h"
#include "OnInventoryWeightChangedDelegate.h"
#include "OnTryMoveItemResultDelegate.h"
#include "YInventoryItem.h"
#include "YControllerInventoryRuntimeComponent.generated.h"

class AActor;
class UObject;
class UYControllerInventoryRuntimeComponent;
class UYPlayerDropComponent;
class UYStateInventoryComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYControllerInventoryRuntimeComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTryMoveItemResult OnTryMoveItemResult;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYPlayerDropComponent* m_cachedDropComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInventoryFullOnPickupDelegate OnInventoryFull;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInventoryWeightChanged OnInventoryWeightChanged;
    
public:
    UYControllerInventoryRuntimeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool TryRemoveItem(const int32 targetInventoryComponentId, const FYInventoryItem& itemToRemove, const int32 amountToRemove);
    
    UFUNCTION(BlueprintCallable)
    void TryRemoveAttachmentFromWeapon(const int32 weaponInventoryComponentId, const int32 targetInventoryComponentId, const FString& weaponItemId, const FString& modItemId, EYPlayerSetType targetSetType, bool dropAttachment, const FString& newlyGeneratedGUID);
    
    UFUNCTION(BlueprintCallable)
    void TryRemoveAllAttachmentsFromWeapon(const int32 weaponInventoryComponentId, const int32 targetInventoryComponentId, const FString& weaponItemId);
    
    UFUNCTION(BlueprintCallable)
    bool TryMoveItem(const int32 targetInventoryComponentId, const int32 originInventoryComponentId, const FYInventoryItem& itemToMove, int32 amountToMove, EYPlayerSetType newSetType, bool ignoreStacking, const FString& newlyGeneratedGUID);
    
    UFUNCTION(BlueprintCallable)
    void TryMoveAttachmentFromWeaponToWeapon(const int32 sourceWeaponInventoryComponentId, const FString& sourceWeaponItemId, const int32 targetWeaponInventoryComponentId, const FString& targetWeaponItemId, const FString& modItemId, const FString& newlyGeneratedGUID);
    
    UFUNCTION(BlueprintCallable)
    bool TryDropItemAmount(const FYInventoryItem& itemToDrop, int32 amountToRemove, int32 inventoryComponentId);
    
    UFUNCTION(BlueprintCallable)
    bool TryDropItem(const FYInventoryItem& itemToDrop, int32 inventoryComponentId);
    
    UFUNCTION(BlueprintCallable)
    bool TryAddVanityToWeapon(const int32 weaponInventoryComponentId, const FString& weaponItemId, const TArray<FDataTableRowHandle>& vanityIds);
    
    UFUNCTION(BlueprintCallable)
    bool TryAddItem(const int32 targetInventoryComponentId, const FYInventoryItem& itemToAdd, const int32 amountToAdd, EYPlayerSetType targetSetType, EYPlayerSetType originSetType, bool ignoreStacking, const FString& newlyGeneratedGUID);
    
    UFUNCTION(BlueprintCallable)
    void TryAddAttachmentToWeapon(const int32 weaponInventoryComponentId, const int32 modInventoryComponentId, const FString& weaponItemId, const FString& modItemId, const FString& newlyGeneratedGUID);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerTryRemoveItem(const int32 targetInventoryComponentId, const FString& ItemInstanceId, const int32 amountToRemove);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerTryMoveItem(const int32 targetInventoryComponentId, const int32 originInventoryComponentId, const FString& ItemInstanceId, const int32 amountToMove, EYPlayerSetType newSetType, bool ignoreStacking, const FString& newlyGeneratedGUID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerTryMoveAttachmentFromWeaponToWeapon(const int32 sourceWeaponInventoryComponentId, const FString& sourceWeaponItemId, const int32 targetWeaponInventoryComponentId, const FString& targetWeaponItemId, const FString& modItemId, const FString& newlyGeneratedGUID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRemoveAttachmentFromWeapon(const int32 weaponInventoryComponentId, const int32 targetInventoryComponentId, const FString& weaponItemId, const FString& modItemId, EYPlayerSetType targetSetType, bool dropAttachment, const FString& newlyGeneratedGUID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRemoveAllAttachmentsFromWeapon(const int32 weaponInventoryComponentId, const int32 targetInventoryComponentId, const FString& weaponItemId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerForceEquipItem(const int32 targetInventoryComponentId, const int32 originInventoryComponentId, const FString& ItemInstanceId, const int32 amountToMove, const FString& newlyGeneratedGUID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerDropItemAmount(int32 inventoryComponentId, const FString& ItemInstanceId, int32 amountToDrop);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerAddAttachmentToWeapon(const int32 weaponInventoryComponentId, const int32 modInventoryComponentId, const FString& weaponItemId, const FString& modItemId, const FString& newlyGeneratedGUID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UYStateInventoryComponent* ResolveStateInventoryComponentForId(int32 componentId, const FString& callerContext) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnAbilityConsumed(const AActor* Owner, const FYInventoryItem& inventoryItem);
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
public:
    UFUNCTION(BlueprintCallable)
    bool ForceEquipItem(const int32 targetInventoryComponentId, const int32 originInventoryComponentId, const FYInventoryItem& itemToMove, const int32 amountToMove, const FString& newlyGeneratedGUID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UYControllerInventoryRuntimeComponent* FindControllerInventoryRuntimeComponent(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientNotifyWeightUpdated(float newWeight);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientNotifyInventoryFull();
    
};

