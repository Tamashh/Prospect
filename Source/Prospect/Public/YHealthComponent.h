#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "CurrentHealthChangedSignatureDelegate.h"
#include "EYAIState.h"
#include "EYGameplayAttribute.h"
#include "HealthDataChangedSignatureDelegate.h"
#include "HealthEmptySignatureDelegate.h"
#include "OnFakeTutorialDeathDelegate.h"
#include "YActorPlateWidgetCreationData.h"
#include "YDealtDamageData.h"
#include "YResourceComponent.h"
#include "YHealthComponent.generated.h"

class AActor;
class UYGameplayAttributesComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYHealthComponent : public UYResourceComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHealthDataChangedSignature HealthDataChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurrentHealthChangedSignature CurrentHealthChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHealthEmptySignature HealthEmptyDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHealthEmptySignature DebugDiedInImmortalMode;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFakeTutorialDeath OnFakeTutorialDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_godModeDamageMaxHealthPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYActorPlateWidgetCreationData m_plateWidgetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_canDieByDamageOverTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HealthData, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_healthData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_healthChangeInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float m_timstampServerTakenRegenRelevantDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYGameplayAttributesComponent* m_gameplayAttributeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentHealth, meta=(AllowPrivateAccess=true))
    float m_currentHealth;

public:
    UYHealthComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void TakeDamage(FYDealtDamageData& Data);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetFakeTutorialDeathActive(bool bActive, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentHealth(float newCurrentHealth, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable)
    void ResetHealth();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsRegeneratingOrDegenerating();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HealthData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentHealth();
    
    UFUNCTION(BlueprintCallable)
    void OnGPAModifierChanged(EYGameplayAttribute Attribute, bool added, const FGuid& Guid);
    
    UFUNCTION(BlueprintCallable)
    void OnAIStateChanged(EYAIState PreviousState, EYAIState currentState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintCallable)
    static bool IsActorDead(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentHealth() const;
    
};

