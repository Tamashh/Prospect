#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EYInteractionType.h"
#include "EYLootContainerTier.h"
#include "YLootContainer.h"
#include "YLootContainerVariation.generated.h"

class AYPlayerController_Match;
class UAnimSequenceBase;
class UMaterialInstanceDynamic;
class USkeletalMeshComponent;
class USoundBase;
class UYStateInventoryComponent;

UCLASS(Blueprintable)
class PROSPECT_API AYLootContainerVariation : public AYLootContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* m_skelMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OnLootContainerDefinition, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_lootContainerDefinition;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* m_openAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundBase* m_openSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundBase* m_closeSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> m_dynamicMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsOpen, meta=(AllowPrivateAccess=true))
    bool m_isOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsEmpty, meta=(AllowPrivateAccess=true))
    bool m_isEmpty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_overlayGleamMaterialParameterName;
    
public:
    AYLootContainerVariation(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void ResetLootContainer();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRowLoaded();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OnLootContainerDefinition();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsOpen() const;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsEmpty();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnInventoryUpdated(UYStateInventoryComponent* stateInventoryComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractionCompleted(EYInteractionType interactionType, AYPlayerController_Match* interactingPlayer);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayOpenSound(bool isOpening);
    
public:
    UFUNCTION(BlueprintCallable)
    void Initialize(FDataTableRowHandle rowHandle, EYLootContainerTier lootTier, int32 containerLootRollCount);
    
};

