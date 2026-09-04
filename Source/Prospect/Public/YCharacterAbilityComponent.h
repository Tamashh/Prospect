#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "EYAbilityState.h"
#include "YCharacterAbilityComponent.generated.h"

class AYPlacementActor;
class UYCharacterAbilityComponent;
class UYPlayerCharacterStateComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYCharacterAbilityComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCooldownInputPressed);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterAbilityConsumed, UYCharacterAbilityComponent*, Component);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAbilityStateChanged, EYAbilityState, State, EYAbilityState, oldState);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterAbilityConsumed OnCharacterAbilityConsumed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilityStateChanged OnAbilityStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCooldownInputPressed OnCooldownInputPressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FString m_abilityItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AbilityRowHandle, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_abilityRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_abilityActionRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AbilityState, meta=(AllowPrivateAccess=true))
    EYAbilityState m_abilityState;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYPlayerCharacterStateComponent* m_characterStateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AYPlacementActor* m_placementActor;
    
public:
    UYCharacterAbilityComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetAbilityState(EYAbilityState newAbilityState);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerOnEnterState_Activating();
    
    UFUNCTION(BlueprintCallable)
    void OnStopWeaponSpinup(bool wasInterupted);
    
    UFUNCTION(BlueprintCallable)
    void OnStartWeaponSpinup();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AbilityState(EYAbilityState oldAbilityState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AbilityRowHandle();
    
    UFUNCTION(BlueprintCallable)
    void OnHideAttachedMesh();
    
    UFUNCTION(BlueprintCallable)
    void OnDeactivateAbilityCallback();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpinUpTime() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemainingSpinupTime();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChargeAmount();
    
protected:
    UFUNCTION(BlueprintCallable)
    void EnterState_Finished();
    
    UFUNCTION(BlueprintCallable)
    void DeactivateAbilityCharacterState();
    
public:
    UFUNCTION(BlueprintCallable)
    void ActivateAbilityInput();
    
};

