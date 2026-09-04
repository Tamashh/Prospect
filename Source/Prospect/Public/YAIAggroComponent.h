#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EYAISenseType.h"
#include "OnActorAggroChangeRequestedDelegate.h"
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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_aggroTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EYAISenseType m_highestSenseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector m_lastPerceivedSenseLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, FYAITargetInfo> m_targets;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActorRemovedFromPerception OnActorRemovedFromPerception;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActorAggroChangeRequested OnActorAggroChangeRequested;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYAIPerceptionComponent* m_perceptionComponent;
    
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
    void SendSharedSense(AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTakeDamage(const FYDealtDamageData& DamageEvent);
    
    UFUNCTION(BlueprintCallable)
    void OnPawnStateChanged(APawn* oldPawn, APawn* newPawn);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSeenTargetSince(float sightSenseTimeout) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearCurrentAggroTargetInfo();
    
    UFUNCTION(BlueprintCallable)
    void ClearAllTargets(const FString& reasonContext);
    
};

