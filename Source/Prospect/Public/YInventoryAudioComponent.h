#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EYInventoryAudioActionPerformed.h"
#include "EYLootSourceType.h"
#include "EYPlayerSetType.h"
#include "YInventoryItem.h"
#include "YModEntry.h"
#include "YInventoryAudioComponent.generated.h"

class UYPlayerDropComponent;
class UYStateInventoryComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYInventoryAudioComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UYInventoryAudioComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void EvaluateStashItemAddedCallback(UYStateInventoryComponent* stateInventoryComponent, const FYInventoryItem& Item);
    
    UFUNCTION(BlueprintCallable)
    void EvaluateModEquippedCallback(UYStateInventoryComponent* stateInventoryComponent, const FYInventoryItem& device, const FYModEntry& mod);
    
    UFUNCTION(BlueprintCallable)
    void EvaluateItemSwappedCallback(UYStateInventoryComponent* stateInventoryComponent, const FYInventoryItem& Item, EYPlayerSetType originSetType, EYPlayerSetType targetSetType);
    
    UFUNCTION(BlueprintCallable)
    void EvaluateItemMovedCallback(UYStateInventoryComponent* stateInventoryComponent, const FYInventoryItem& Item, EYPlayerSetType originSetType, EYPlayerSetType targetSetType);
    
    UFUNCTION(BlueprintCallable)
    void EvaluateItemDroppedCallback(UYPlayerDropComponent* playerDropComponent, const FYInventoryItem& Item, EYLootSourceType lootType);
    
    UFUNCTION(BlueprintCallable)
    void EvaluateItemAddedCallback(UYStateInventoryComponent* stateInventoryComponent, const FYInventoryItem& Item, EYPlayerSetType equippedSetType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_PlayInventoryAudio(EYInventoryAudioActionPerformed actionPerformed, EYPlayerSetType targetSetType, const FYInventoryItem& Item);
    
};

