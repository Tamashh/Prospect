#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "OnBlendToRagdollDelegate.h"
#include "OnDeathDelegateDelegate.h"
#include "OnDeathPreUnpossessDelegateDelegate.h"
#include "OnDeathRagdollDelegateDelegate.h"
#include "YDeathAnimMontageInfo.h"
#include "YCharacterDeathComponent.generated.h"

class AActor;
class UYHealthComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYCharacterDeathComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isExplodingOnDeath;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Death, meta=(AllowPrivateAccess=true))
    FYDeathAnimMontageInfo m_deathInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_minRagdollDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_maxRagdollDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_minDotRagdollCleanUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_minDistanceRagdollCleanUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_freezeRagdollDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_intervalRetryRagdollCleanUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_destroyOwnerDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag m_gameplayTagKeepCollisionPostDeath;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeathPreUnpossessDelegate BP_OnDeathPreUnpossess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeathDelegate BP_OnDeath;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeathRagdollDelegate BP_OnBlendToRagdollOnDeathWithoutDeathAnim;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBlendToRagdoll BP_OnBlendToRagdoll;
    
    UYCharacterDeathComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void TryRagdollCleanUp();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Death();
    
    UFUNCTION(BlueprintCallable)
    void OnDestroySafetyTimerExpired();
    
    UFUNCTION(BlueprintCallable)
    void OnDeath_Authority(UYHealthComponent* healthComponent, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable)
    void FreezeRagdoll();
    
    UFUNCTION(BlueprintCallable)
    void DestroyOwner();
    
public:
    UFUNCTION(BlueprintCallable)
    void BlendToRagdollAndTriggerDestroy();
    
};

