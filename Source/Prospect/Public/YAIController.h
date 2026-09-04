#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "GameplayTagContainer.h"
#include "EYAIReactionContext.h"
#include "OnAnyAIAttackStartedDelegate.h"
#include "OnComboWindowStartedDelegate.h"
#include "YAIController.generated.h"

class AYAICharacter;
class UYAIAggroComponent;
class UYAITurnComponent;

UCLASS(Blueprintable)
class AYAIController : public AAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_delayBehaviorSpawning;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnyAIAttackStarted BP_OnAnyAIAttackStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnComboWindowStarted OnComboWindowStartedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer m_possibleComboTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYAITurnComponent* m_turnComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AYAICharacter* m_controlledCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_keyHomeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_keyNameCombatTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_keyStabilityAnimationInfo;
    
public:
    AYAIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopComboWindow();
    
    UFUNCTION(BlueprintCallable)
    void StartComboWindow(FGameplayTagContainer possibleComboTags);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAIReactionContext(EYAIReactionContext newReactionContext);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UYAIAggroComponent* GetAggroComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnInitializeBehavior();
    
};

