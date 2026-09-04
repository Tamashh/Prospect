#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EYClimbingStateInternal.h"
#include "EYMoveType.h"
#include "EYObstacleType.h"
#include "YFeatureToggles.h"
#include "YReplicatedLedgeClimbingData.h"
#include "YLedgeClimbingComponent.generated.h"

class AYPlayerCharacter;
class UCapsuleComponent;
class UYFallingDamageComponent;
class UYPlayerCharacterStateComponent;
class UYPlayerMovementComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYLedgeClimbingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInternalClimbingStateChangedSignature, EYClimbingStateInternal, prevClimbingState, EYClimbingStateInternal, newClimbingState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCooldownStateChangedSignature, bool, bIsOnCooldown);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCanClimbChangedSignature, bool, bCanClimb);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInternalClimbingStateChangedSignature OnInternalClimbingStateChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCooldownStateChangedSignature OnCooldownStateChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCanClimbChangedSignature OnCanClimbChangedEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYPlayerMovementComponent* m_playerMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYPlayerCharacterStateComponent* m_playerCharacterStateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYFallingDamageComponent* m_fallingDamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AYPlayerCharacter* m_ownerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* m_characterCapsuleComponent;
    
public:
    UYLedgeClimbingComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnLedgeClimbingDataReplicatedCallback(const FYReplicatedLedgeClimbingData& oldData, const FYReplicatedLedgeClimbingData& newData);
    
    UFUNCTION(BlueprintCallable)
    void OnInternalClimbingStateChangedCallback(EYClimbingStateInternal prevClimbingState, EYClimbingStateInternal newClimbingState);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnFeatureTogglesUpdated(const FYFeatureToggles& featureToggles);
    
    UFUNCTION(BlueprintCallable)
    void OnClimbingStateDeactivatedCallback(bool wasInterrupted);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingSoftViewLock() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnCooldown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClimbing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EYObstacleType GetObstacleType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EYMoveType GetMoveType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinYawAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxYawAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLerpMaxTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EYClimbingStateInternal GetInternalClimbingState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetClimbingSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetClimbingNormal() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void CooldownCallback();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanLedgeClimb() const;
    
};

