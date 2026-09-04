#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EYLeanTarget.h"
#include "EYStateChangeType.h"
#include "YLeaningComponent.generated.h"

class UYPlayerCharacterStateComponent;
class UYPlayerMovementComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYLeaningComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLeanDirectionSwitchedSignature);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLeanDirectionSwitchedSignature OnLeanDirectionSwitchedEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float m_leanTargetAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OnLeanTarget, meta=(AllowPrivateAccess=true))
    EYLeanTarget m_leanTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYPlayerMovementComponent* m_playerMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYPlayerCharacterStateComponent* m_playerCharacterStateComponent;
    
public:
    UYLeaningComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_OnLeanTarget();
    
    UFUNCTION(BlueprintCallable)
    void OnJumpedCallback(int32 jumpCount);
    
    UFUNCTION(BlueprintCallable)
    void OnAnyStateChangedCallback(EYStateChangeType stateChangeType);
    
public:
    UFUNCTION(BlueprintCallable)
    void LeanRight_InputPressedCallback();
    
    UFUNCTION(BlueprintCallable)
    void LeanLeft_InputPressedCallback();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLeaning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxLeanAngleThirdPerson() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxLeanAngleFirstPerson() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLeanTranslationThirdPerson() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLeanTranslationFirstPerson() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLeanAngleThirdPerson() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLeanAngleFirstPerson() const;
    
};

