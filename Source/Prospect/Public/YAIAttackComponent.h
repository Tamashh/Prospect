#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnAttackEndedDelegate.h"
#include "OnAttackStartedDelegate.h"
#include "OnFiredDelegate.h"
#include "OnNewAttackPhaseStartedDelegate.h"
#include "YAIAttackPhaseDefinition.h"
#include "YAIRangedAttackDefinition.h"
#include "YReplicatedAttackRuntimeData.h"
#include "YAIAttackComponent.generated.h"

class UYCharacterDeathComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYAIAttackComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFired BP_OnFired;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_currentPhasePlayCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_currentPhaseDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AttackRuntimeData, meta=(AllowPrivateAccess=true))
    FYReplicatedAttackRuntimeData m_replicatedRuntimeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_numShotsFiredInCurrentPhase;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttackStarted BP_OnAttackStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttackEnded BP_OnAttackEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNewAttackPhaseStarted BP_OnNewPhaseStarted;
    
public:
    UYAIAttackComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StartRangedAttack(int32 indexRangedAttack);
    
private:
    UFUNCTION(BlueprintCallable)
    void StartNextPhase();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AttackRuntimeData();
    
    UFUNCTION(BlueprintCallable)
    void OnDeath(UYCharacterDeathComponent* deathComponent);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRangedAttackRunning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYAIRangedAttackDefinition GetCurrentRangedAttackTuningData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentRangedAttackIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYAIAttackPhaseDefinition GetCurrentPhaseTuningData() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void FireTransport();
    
public:
    UFUNCTION(BlueprintCallable)
    void CancelAttack();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnFireTansport();
    
};

