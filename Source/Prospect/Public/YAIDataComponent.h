#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EYAIState.h"
#include "OnAIStartDodgeSignatureDelegate.h"
#include "OnAIStartHitReactionSignatureDelegate.h"
#include "OnAIStateChangedSignatureDelegate.h"
#include "OnCombatTargetActorChangedDelegate.h"
#include "OnProjectileSpawnedDelegateDelegate.h"
#include "YAIDataComponent.generated.h"

class AActor;
class AYAISquad;
class UYHealthComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYAIDataComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AYAISquad* m_squad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_peacefull;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_combatTargetReplicated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AIState, meta=(AllowPrivateAccess=true))
    EYAIState m_aiState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool m_isAngry;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAIStateChangedSignature AIStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAIStartHitReactionSignature BP_OnHitReactionStartedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCombatTargetActorChanged BP_OnCombatTargetActorChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAIStartDodgeSignature BP_OnDodgeStartedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnProjectileSpawnedDelegate BP_OnProjectileSpawnedDelegate;
    
    UYAIDataComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetStateToDead(UYHealthComponent* healthComponent, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable)
    void SetReplicatedCombatTarget(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void SetAIState(EYAIState aiState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_AIState(EYAIState previouseState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsAngry();
    
    UFUNCTION(BlueprintCallable)
    FString GetDebugInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetCombatTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EYAIState GetAIState();
    
};

