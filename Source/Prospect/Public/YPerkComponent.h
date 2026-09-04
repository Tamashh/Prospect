#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "Engine/EngineTypes.h"
#include "EYGameplayAttribute.h"
#include "EYGameplayContextType.h"
#include "YDealtDamageData.h"
#include "YMatchPhaseData.h"
#include "YPerk.h"
#include "YPerkInstance.h"
#include "YRolledPerkEntry.h"
#include "YPerkComponent.generated.h"

class AActor;
class ACharacter;
class UCharacterMovementComponent;
class UTexture2D;
class UYGameplayAttributesComponent;
class UYHealthComponent;
class UYPerkAction;
class UYPlayerCharacterStateComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PROSPECT_API UYPerkComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYPerkDeactivatedSignature, const FYPerk&, perk);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FYPerkChangedSignature);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYPerkActivatedSignature, const FYPerk&, perk);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPerkChangedSignature PerkChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPerkActivatedSignature BP_PerkActivatedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPerkDeactivatedSignature BP_PerkDeactivatedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Perks, meta=(AllowPrivateAccess=true))
    TArray<FYPerkInstance> m_activePerkInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYPerkInstance> m_activePerkInstancesPrev;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYGameplayAttributesComponent* m_gpaComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYPlayerCharacterStateComponent* m_playerStateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYHealthComponent* m_healthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterMovementComponent* m_characterMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UYPerkAction*> m_perkActionInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UYPerkAction*> m_loadedPerkActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_wasMatchPhaseStorm;
    
public:
    UYPerkComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool RemovePerk(const FGuid& perkId);
    
private:
    UFUNCTION(BlueprintCallable)
    void PerkActionsAreLoaded(FYPerk loadedPerk);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetingStopped(bool wasInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetingStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnTakeDamage(const FYDealtDamageData& Data);
    
    UFUNCTION(BlueprintCallable)
    void OnStormStopped();
    
    UFUNCTION(BlueprintCallable)
    void OnStormStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnSprintingStopped(bool wasInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnSprintingStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnSpinningUpStopped(bool wasInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnSpinningUpStarted();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Perks(TArray<FYPerkInstance> oldPerks);
    
    UFUNCTION(BlueprintCallable)
    void OnMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> previousMovementMOde, uint8 PreviousCustomMode);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnModifyDealDamage(FYDealtDamageData& Data);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMeleeLightStopped(bool wasInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnMeleeLightStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnMeleeHeavyStopped(bool wasInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnMeleeHeavyStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnMatchPhaseChanged(const FYMatchPhaseData& newMatchPhase);
    
    UFUNCTION(BlueprintCallable)
    void OnHealthChanged(float CurrentHealth, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable)
    void OnGameplayAttributeChanged(EYGameplayAttribute Attribute, float newAttributeValue, float oldAttributeValue);
    
    UFUNCTION(BlueprintCallable)
    void OnDealDamage(const FYDealtDamageData& Data);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSoftObjectPtr<UTexture2D>> GetSpecificPerkIcons(TArray<FDataTableRowHandle> excluidePerks) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetPerkInstigators() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSoftObjectPtr<UTexture2D>> GetPerkIcons(TArray<FDataTableRowHandle> excluidePerks) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FText> GetPerkDisplayNames() const;
    
    UFUNCTION(BlueprintCallable)
    void AddPerks(const TArray<FDataTableRowHandle>& addedPerks, EYGameplayContextType contextType, AActor* perkInstigator);
    
    UFUNCTION(BlueprintCallable)
    FGuid AddPerkFromRowHandle(const FDataTableRowHandle& rowHandle, EYGameplayContextType contextType, AActor* Instigator);
    
    UFUNCTION(BlueprintCallable)
    FGuid AddPerkByPerkEntry(const FYRolledPerkEntry& rolledPerkEntry, EYGameplayContextType contextType);
    
    UFUNCTION(BlueprintCallable)
    FGuid AddPerk(const FDataTableRowHandle& dataTableRow, EYGameplayContextType contextType, AActor* Instigator);
    
};

