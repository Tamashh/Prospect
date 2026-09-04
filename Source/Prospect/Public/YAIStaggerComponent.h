#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnStaggerDelegate.h"
#include "YAIStaggerDefinition.h"
#include "YAIStaggerTriggerHealthPercentage.h"
#include "YAIStaggerTriggerWeakspotHealth.h"
#include "YDealtDamageData.h"
#include "YAIStaggerComponent.generated.h"

class AYAICharacter;
class UAnimInstance;
class UAnimMontage;
class UYAIAnimationComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYAIStaggerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FYAIStaggerDefinition> m_staggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FYAIStaggerTriggerHealthPercentage> m_percentageTriggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FYAIStaggerTriggerWeakspotHealth> m_weakspotTriggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> m_currentStaggerIndexMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* m_forcedStaggerAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isStaggering;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStagger BP_OnStaggerTriggered;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AYAICharacter* m_character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYAIAnimationComponent* m_animationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimInstance* m_animInstance;
    
public:
    UYAIStaggerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnTakeDamage(const FYDealtDamageData& damageData);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMontageEnded(UAnimMontage* montageEnded, bool interrupted);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddScalarParameterUpdate(FName ParameterName, float TargetValue, float originalValue, float InterpolationTime);
    
};

