#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EYAISenseType.h"
#include "OnActorRemovedFromPerceptionDelegate.h"
#include "YAITargetInfo.h"
#include "YDealtDamageData.h"
#include "YAIAggroComponent.generated.h"

class AActor;
class APawn;
class UYAIPerceptionComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYAIAggroComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActorRemovedFromPerception OnActorRemovedFromPerception;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_aggroTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, FYAITargetInfo> m_targets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_clearCombatTargetOnAggroLoss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_keepLastKnowLocationOnCombatTargetLoss;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_blackboardKeyName_HighestSenseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_blackboardKeyName_HighestSenseLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_blackboardKeyName_CombatTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_blackboardKeyName_LastKnownLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_blackboardKeyName_DurationTargetNotVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_blackboardKeyName_IsCombatTargetVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_proximitySenseInterval;

private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYAIPerceptionComponent* m_perceptionComponent;

public:
    UYAIAggroComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool TryFindTargetInfo(AActor* Target, FYAITargetInfo& outTargetInfo);
    
    UFUNCTION(BlueprintCallable)
    bool TryAddTarget(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    bool SetTargetAggroMultiplayer(AActor* Target, float Multiplier, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentAggroTarget(AActor* Target, const FString& reasonContext);
    
    UFUNCTION(BlueprintCallable)
    void SendSharedSense(AActor* Target);

private:
    UFUNCTION(BlueprintCallable)
    void RunProximityCheck();
    
    UFUNCTION(BlueprintCallable)
    void OnTargetPerceptionUpdated(AActor* Target, FAIStimulus Stimulus);
    
    UFUNCTION(BlueprintCallable)
    void OnTakeDamage(const FYDealtDamageData& DamageEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnStateChanged(APawn* oldPawn, APawn* newPawn);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSeenAnyTargetsRecently(float Duration) const;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCurrentTargetLastPerceivedSenseLocation();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    EYAISenseType GetCurrentTargetHighestSense();
    
    UFUNCTION(BlueprintCallable)
    void ClearCurrentAggroTargetInfo();
    
    UFUNCTION(BlueprintCallable)
    void ClearAllTargets(const FString& reasonContext);
    
};

