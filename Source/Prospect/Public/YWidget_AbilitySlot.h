#pragma once
#include "CoreMinimal.h"
#include "YWidget.h"
#include "EYAbilityState.h"
#include "YWidget_AbilitySlot.generated.h"

class UTextBlock;
class UYCharacterAbilityComponent;
class UYWidget_ImageBase;

UCLASS(Blueprintable, EditInlineNew)
class UYWidget_AbilitySlot : public UYWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYCharacterAbilityComponent* m_abilityComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYWidget_ImageBase* m_abilityImageBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_abilityCooldownText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_abilityActiveTimeLeftText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYAbilityState m_currentAbilityState;
    
public:
    UYWidget_AbilitySlot();

protected:
    UFUNCTION(BlueprintCallable)
    void OnAbilityStateChanged(EYAbilityState newState, EYAbilityState oldState);
    
    UFUNCTION(BlueprintCallable)
    void OnAbilityComponentInitialized();
    
    UFUNCTION(BlueprintCallable)
    void DetermineAbilityComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnCooldownTimeUpdate(float cooldownNormalizedValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnCooldownInputPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnAbilityStateChanged(EYAbilityState abilityState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnAbilityComponentInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_AnimationStateChanged(EYAbilityState abilityState, EYAbilityState oldState);
    
};

