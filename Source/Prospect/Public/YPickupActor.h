#pragma once
#include "CoreMinimal.h"
#include "EYItemType.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "Engine/EngineTypes.h"
#include "EYInteractionType.h"
#include "EYItemRarityType.h"
#include "EYLootSourceType.h"
#include "EYPickupType.h"
#include "OnCollectedDelegate.h"
#include "YActiveWeaponCharacterInitializationData.h"
#include "YMeshAttachment.h"
#include "YPickupItem.h"
#include "YPickupActor.generated.h"

class ACharacter;
class AYPlayerController;
class AYPlayerController_Match;
class AYPlayerState;
class UAnimMontage;
class UMaterialInterface;
class UMeshComponent;
class UObject;
class UProjectileMovementComponent;
class USphereComponent;
class UYActorUIComponent;
class UYActorWidget;
class UYMapMarkerComponent;
class UYObjectInteractionComponent;
class UYScannableComponent;

UCLASS(Blueprintable)
class AYPickupActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool m_wantsInitialScaling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_soundLanding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_minimumBouncePlaySoundVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_instigatorTagBI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_offsetSpawnLocationBySphereRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYPickupType m_pickupType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Item, meta=(AllowPrivateAccess=true))
    FYPickupItem m_item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EYLootSourceType m_lootSourceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_pickUpSoundRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor m_rarityColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_showNotificationMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UYActorWidget> m_uiWidgetComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMeshComponent* m_meshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_meshScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_relativeMeshLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_relativeMeshRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* m_sphereComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYObjectInteractionComponent* m_objectInteractionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYScannableComponent* m_scannableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProjectileMovementComponent* m_projectileMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYMapMarkerComponent* m_mapmarkerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYActorUIComponent* m_actorUIComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACharacter* m_characterCollectingPickUpActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AYPlayerState* m_exclusivePlayerState;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCollected BP_OnCollectedByPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_preventAutoSwitchOffTick;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_isCollected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_lastTimeReceivedMovementUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_netUpdateFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRepLootToLootCollision, meta=(AllowPrivateAccess=true))
    bool m_LootToLootCollisionEnabled;
    
public:
    AYPickupActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateInteractionMessage();
    
    UFUNCTION(BlueprintCallable)
    void SetupPickupItemInternal();
    
    UFUNCTION(BlueprintCallable)
    void SetupExclusivePickupRightsForPlayer(AYPlayerState* PlayerState, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void SetPickupItem(const FYPickupItem& pickupItem);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetMesh(TSoftObjectPtr<UObject> meshObject, TSoftObjectPtr<UMaterialInterface> meshMaterial, const TArray<FYMeshAttachment>& attachments);
    
public:
    UFUNCTION(BlueprintCallable)
    void RegisterActorForDespawning();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnWeaponContentLoaded(FYActiveWeaponCharacterInitializationData Data) const;
    
    UFUNCTION(BlueprintCallable)
    void OnRepLootToLootCollision();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Item();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnProjectileBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPlayLootSpawnEffects(EYItemRarityType rarity);
    
    UFUNCTION(BlueprintCallable)
    void OnPickUpExclusivityEnds();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMeshLoaded(TSoftObjectPtr<UObject> meshObject, TSoftObjectPtr<UMaterialInterface> meshMaterial, TArray<FYMeshAttachment> attachments);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMakeMeshComponentVisible() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCollected(EYInteractionType interactionType, AYPlayerController_Match* collectingPlayer);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsBlockedByExclusivity(AYPlayerState* PlayerState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMeshTransformOverride(FVector& outTranslation, FRotator& OutRotation, FVector& outScale) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EYItemType GetItemType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EYItemRarityType GetItemRarity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle GetBaseItemRowHandle() const;
    
    UFUNCTION(BlueprintCallable)
    void DisableInitialScalingDemand();
    
    UFUNCTION(BlueprintCallable)
    void DestroyPickUpActorNow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPlayerPickupItem(AActor* actorContext, TArray<UAnimMontage*> blockingAnimations) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnMeshComponentAdded();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnItemSet();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnCollected(AYPlayerController* collectingPlayer, bool isItemPlacedInPlayerInventory);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText BP_GetInteractionBlockedMessage(int32 numInputBindings) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText BP_GetInteractionAvailableMessage(int32 numInputBindings) const;
    
};

