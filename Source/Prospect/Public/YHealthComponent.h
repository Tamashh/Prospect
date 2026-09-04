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
#include "YHealthDataTableRow.h"
#include "YResourceComponent.h"
#include "YHealthComponent.generated.h"

class AActor;
class APawn;
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
    bool m_immortalmodeActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_immortalModeHealthRatioResetTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYActorPlateWidgetCreationData m_plateWidgetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_canDieByDamageOverTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HealthData, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_healthData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentHealth, meta=(AllowPrivateAccess=true))
    float m_currentHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_healthChangeInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float m_timstampServerTakenRegenRelevantDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYGameplayAttributesComponent* m_gameplayAttributeComponent;
    
public:
    UYHealthComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void TakeDamage(FYDealtDamageData& Data);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetFakeTutorialDeathActive(bool bActive, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable)
    void SetDatatableRow(FDataTableRowHandle desiredRowHandle);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentHealth(float newCurrentHealth, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable)
    void ResetHealth();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsRegeneratingOrDegenerating();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HealthData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentHealth();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGPAModifierChanged(EYGameplayAttribute Attribute, bool added, const FGuid& Guid);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnAIStateChanged(EYAIState previuousState, EYAIState currentState);
    
    UFUNCTION(BlueprintCallable)
    static void LogHealthInfo(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float IsRegenerating() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float IsFakeTutorialDeathActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintCallable)
    static bool IsActorDead(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRegenerationRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRegenerationDelay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetHealthRowFromRowHandle(FDataTableRowHandle rowHandle, FYHealthDataTableRow& outData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDataTableRowHandle GetHealthRow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDegenerationRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDegenerationInstigators(TArray<APawn*>& instigators) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentHealth() const;
    
    UFUNCTION(BlueprintCallable)
    void CreateHealthWidgetDelayed();
    
};

