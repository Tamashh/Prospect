#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "YAIMeleeAttackDefinition.h"
#include "YAIMontagePlayInfo.h"
#include "YDealtDamageData.h"
#include "YAIAnimationInterface.generated.h"

class UAnimMontage;
class UYAIAttackComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UYAIAnimationInterface : public UInterface {
    GENERATED_BODY()
};

class IYAIAnimationInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool TriggerFlinchAnimation(const FYDealtDamageData& HitInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimationMontage(FYAIMontagePlayInfo montageInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAnimMontage* OnStabilityThresholdReached(const FYDealtDamageData& damageInfo, FName stabilityIdentifier, FName currentAIActionContext, float& yawRotationGoalWorldSpace, bool& canBeInterruptedByDodge);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnRangedAttackFire(UYAIAttackComponent* attackComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnRangedAttackCancelled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnAttackPhaseStarted(UYAIAttackComponent* attackComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FYAIMontagePlayInfo GetTurnAnimationToPlay(float desiredTurnAngle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAnimMontage* GetTauntAnimationToPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAnimMontage* GetSummonOutAnimationToPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAnimMontage* GetSummonAnimationToPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAnimMontage* GetSpawnAnimationToPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAnimMontage* GetSnipedAnimationToPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAnimMontage* GetScanAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAnimMontage* GetReloadAnimationToPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAnimMontage* GetRangedAttackAnimationToPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAnimMontage* GetOutOfRestAnimationToPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAnimMontage* GetMeleeDodgeBackAnimationToPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAnimMontage* GetMeleeAttackAnimationToPlay(float distanceToTarget, int32 meleeArrayIndex, const FYAIMeleeAttackDefinition& meleeAttack);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAnimMontage* GetLeapForwardAnimationToPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAnimMontage* GetInterruptSummonAnimationToPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAnimMontage* GetInterruptBuffAnimationToPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAnimMontage* GetGoToRestAnimationToPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAnimMontage* GetExplosionAnimationToPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAnimMontage* GetDodgeAnimationToPlay(float maxAllowedDodgeDistance, bool isToRight);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAnimMontage* GetDeathAnimationToPlay(const FYDealtDamageData& deathHitInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAnimMontage* GetBuffOutAnimationToPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAnimMontage* GetBuffAnimationToPlay();
    
};

