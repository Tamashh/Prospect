#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlueprintBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "EYAnimTaskFinishCondition.h"
#include "YBTTask_PlayAnimation.generated.h"

class AYAICharacter;
class UAnimInstance;
class UAnimMontage;

UCLASS(Blueprintable)
class PROSPECT_API UYBTTask_PlayAnimation : public UBTTask_BlueprintBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AYAICharacter* m_characterAIOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimInstance* m_animInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* m_animationMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYAnimTaskFinishCondition m_taskFinishCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_blackboardValueToObserve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_expectedValueAfterChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_timeBeforeMontageEnds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_montageSectionToPlay;
    
public:
    UYBTTask_PlayAnimation();

    UFUNCTION(BlueprintCallable)
    void OnMontageEndedOrBlendingOut(UAnimMontage* montageEnded, bool interrupted);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString GetStaticDescriptionBP() const;

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAnimMontage* GetAnimationToPlay(bool& allowPhysicsRotationDuringAnimation, bool& finishNodeSuccesfullyIfNoAnimIsProvided);
    
public:
    UFUNCTION(BlueprintCallable)
    void FinishTaskDueTimer();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnNodeEnds(bool succeeded);
    
};

