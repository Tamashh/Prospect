#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "EYAIState.h"
#include "OnAnimNotifyAttackSignatureDelegate.h"
#include "OnMeleeAttackDelegate.h"
#include "OnRangedAttackDelegate.h"
#include "OnReceivedGameplayTagsDelegate.h"
#include "YAIAudio.h"
#include "YAITuningRow.h"
#include "YCharacter.h"
#include "YDealtDamageData.h"
#include "YAICharacter.generated.h"

class AActor;
class AYAIController;
class AYAISquad;
class AYProjectile;
class UYAIAnimationComponent;
class UYAIDataComponent;
class UYAIStaggerComponent;
class UYAIVariationsComponent;
class UYArmorComponent;

UCLASS(Blueprintable)
class AYAICharacter : public AYCharacter, public IGenericTeamAgentInterface, public IGameplayTagAssetInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AYAIController* m_aiController;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYAIAudio m_audioAIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_audioTagRowHandle;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_GameplayTags, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer m_gameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Variations, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_variationsRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYAIDataComponent* m_aiDataComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYAIAnimationComponent* m_animationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYAIStaggerComponent* m_staggerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYArmorComponent* m_armorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UYAIVariationsComponent* m_variationsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_characterNameOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_rangedAttackOriginLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_isPlacedInWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool m_shouldLimitRootMotionVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector m_rootMotionVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_aiTuningDataHandle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnimNotifyAttackSignature BPOnAttackNotifyDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRangedAttack BP_OnRangeAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMeleeAttack OnMeleeAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceivedGameplayTags BP_OnReceivedGameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_overrideTargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AYProjectile* m_attachedProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_allowedToReset;
    
    AYAICharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetViewRotationBone(FName BoneName, bool ignoreVertical);
    
    UFUNCTION(BlueprintCallable)
    void SetVariations(const FDataTableRowHandle& variationRowHandle);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxSpeed(const FString& Context, float movementSpeed);
    
    UFUNCTION(BlueprintCallable)
    void ReportAISenseDamageEvent(const FYDealtDamageData& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayMuzzle(FDataTableRowHandle rowHandle);
    
    UFUNCTION(BlueprintCallable)
    void OnYAIStateHasChanged(EYAIState oldState, EYAIState newState);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_Variations();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GameplayTags();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AYAIController* GetYAIController();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSquadTypeName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AYAISquad* GetSquad();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetGameplayTags(FGameplayTagContainer& characterTags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDebugAIInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetCombatTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAIVariationName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAITuningDataBP(FYAITuningRow& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EYAIState GetAIState();
    
    UFUNCTION(BlueprintCallable)
    UYAIDataComponent* GetAIDataComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAICharacterType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetAICharacterName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAIAudioData(FYAIAudio& audioData);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteAttackAnimationNotify();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ReceivedGameplayTags();
    
    UFUNCTION(BlueprintCallable)
    void AppendGameplayTags(const FGameplayTagContainer& newTags);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
};

