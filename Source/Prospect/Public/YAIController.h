#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "GameplayTagContainer.h"
#include "OnComboWindowStartedDelegate.h"
#include "YAIController.generated.h"

class AYAICharacter;
class UYAIAggroComponent;
class UYAITurnComponent;

UCLASS(Blueprintable)
class AYAIController : public AAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnComboWindowStarted OnComboWindowStartedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer m_possibleComboTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYAITurnComponent* m_turnComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isAllowedToReset;

protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AYAICharacter* m_controlledCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_keyHomeLocation;
    
public:
    AYAIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopComboWindow();
    
    UFUNCTION(BlueprintCallable)
    void StartComboWindow(FGameplayTagContainer possibleComboTags);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeBehavior();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UYAIAggroComponent* GetAggroComponent();
    
};

