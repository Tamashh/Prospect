#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EYAIState.h"
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_combatTargetReplicated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AIState, meta=(AllowPrivateAccess=true))
    EYAIState m_aiState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool m_isAngry;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAIStateChangedSignature AIStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCombatTargetActorChanged BP_OnCombatTargetActorChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnProjectileSpawnedDelegate BP_OnProjectileSpawnedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_notifyPlayerOnCombatStarted;

    UYAIDataComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetReplicatedCombatTarget(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAngry(bool isAngry);
    
    UFUNCTION(BlueprintCallable)
    void SetAIState(EYAIState aiState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AIState(EYAIState PreviousState);

    UFUNCTION(BlueprintCallable)
    void OnAIDied(UYHealthComponent* healthComponent, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsAngry();
    
    UFUNCTION(BlueprintCallable)
    FString GetDebugInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetCombatTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EYAIState GetAIState();
    
};

