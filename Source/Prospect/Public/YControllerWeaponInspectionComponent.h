#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "EYPlayerSetType.h"
#include "YInventoryItem.h"
#include "YControllerWeaponInspectionComponent.generated.h"

class AActor;
class UYControllerWeaponInspectionComponent;
class UYStateInventoryComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYControllerWeaponInspectionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnInspectedInventoryItemUpdatedSignature, FYInventoryItem, newInventoryItem);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnInspectedInventoryItemUpdatedSignature OnInspectedInventoryItemUpdatedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> m_allowedSceneEntries;
    
    UYControllerWeaponInspectionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetInspectedInventoryItem(const FYInventoryItem& inventoryItem, int32 inventoryId);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerStashItemUpdatedCallback(UYStateInventoryComponent* stateInventoryComponent, const FYInventoryItem& Item);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerSetItemUpdatedCallback(UYStateInventoryComponent* stateInventoryComponent, const FYInventoryItem& Item, EYPlayerSetType equippedSetType);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerSetItemRemoved(UYStateInventoryComponent* stateInventoryComponent, const FYInventoryItem& Item, EYPlayerSetType equippedSetType);
    
    UFUNCTION(BlueprintCallable)
    void OnDeactivatedInventoryStateCallback(bool bWasInterrupted);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInspectedInventoryItem(FYInventoryItem& outInventoryItem) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInspectedInventoryId() const;
    
    UFUNCTION(BlueprintCallable)
    static UYControllerWeaponInspectionComponent* FindWeaponInspectionComponent(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable)
    void ClearInspectedInventoryItem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AllowedToInspectWeapon() const;
    
};

