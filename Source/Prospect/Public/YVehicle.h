#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "Engine/EngineTypes.h"
#include "EYInteractionType.h"
#include "EYVehicleStateType.h"
#include "OnHardLandingDelegate.h"
#include "OnRuntimeDataChangedDelegate.h"
#include "OnVehicleInteractedDelegate.h"
#include "OnVehicleStateChangedDelegate.h"
#include "YInventoryItem.h"
#include "YMovementModeDataChanged.h"
#include "YRuntimeVehicleData.h"
#include "YVehicle.generated.h"

class AActor;
class AYPlayerController_Match;
class UAudioComponent;
class UYDamageComponent;
class UYHealthComponent;
class UYInventoryAssociationComponent;
class UYMapMarkerComponent;
class UYObjectInteractionComponent;
class UYVehicleMovementComponent;

UCLASS(Blueprintable)
class AYVehicle : public ACharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_NewRuntimeData, meta=(AllowPrivateAccess=true))
    FYRuntimeVehicleData m_runtimeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FYRuntimeVehicleData m_runtimeStateAcknowledged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_activeRotationDelta;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVehicleInteracted OnVehicleInteracted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVehicleStateChanged m_onVehicleStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHardLanding m_onHardLanding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYObjectInteractionComponent* m_interactionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYVehicleMovementComponent* m_vehicleMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYDamageComponent* m_damageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYHealthComponent* m_healthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYMapMarkerComponent* m_mapmarkerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* m_mainAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYInventoryAssociationComponent* m_inventoryAssociationComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRuntimeDataChanged OnRuntimeDataChangedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_angularVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_speedCurrentTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isCosmeticState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_cachedVehicleHeightAlignmentData;
    
    AYVehicle(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_NewRuntimeData();
    
    UFUNCTION(BlueprintCallable)
    void OnPossedPawnStateChanged(bool wasInteruppted);
    
    UFUNCTION(BlueprintCallable)
    void OnPossedPawnMeshInitialized();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnInventoryItemChanged(FYInventoryItem oldItem, FYInventoryItem newItem);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnInteractionTimeChange(float& outInteractionTime, AActor* relevantActor);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractionCompleted(EYInteractionType interactionType, AYPlayerController_Match* interactingPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnHealthZero(UYHealthComponent* healthComponent, AActor* actorInstigator);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnFinishedAsyncLoading(int32 loadHandle);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_RuntimeDataChanged(EYVehicleStateType oldState, EYVehicleStateType newState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnMovementModeChanged(FYMovementModeDataChanged newData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnInventoryItem(FYInventoryItem inventoryItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnImpact(const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnBoostState(bool newState);
    
};

