#pragma once
#include "CoreMinimal.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "EYAIState.h"
#include "EYEnemyType.h"
#include "OnResetRequestedDelegateDelegate.h"
#include "YAIDebugRangedAttackInfo.h"
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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_variationsRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_GameplayTags, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer m_gameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool m_shouldLimitRootMotionVelocity;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector m_rootMotionVelocity;
    
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
    FDataTableRowHandle m_aiTuningDataHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AYAIController* m_aiController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYAIAudio m_audioAIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_audioTagRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_forcedShootAtLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AYProjectile* m_attachedProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FYAIDebugRangedAttackInfo m_debugRangedAttackInfo;

    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReceivedGameplayTags BP_OnReceivedGameplayTags;

    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnResetRequestedDelegate OnResetRequestedEvent;
    
    AYAICharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void TriggerReset() const;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString ToDebugString() const;

    UFUNCTION(BlueprintCallable)
    void SetViewRotationBone(FName BoneName, bool ignoreVertical);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxSpeed(const FString& Context, float movementSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxAcceleration(const FString& Context, float accelerationSpeed);
    
    UFUNCTION(BlueprintCallable)
    void ReportAISenseDamageEvent(const FYDealtDamageData& Data);
    
    UFUNCTION(BlueprintCallable)
    void OnYAIStateHasChanged(EYAIState oldState, EYAIState newState);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GameplayTags();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReceivedGameplayTags();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayMuzzle(FDataTableRowHandle weaponTransportRowHandle);

    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastPlayMuzzle(const FDataTableRowHandle& weaponTransportRowHandle);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AYAIController* GetYAIController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSquadTypeName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AYAISquad* GetSquad() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetGameplayTags(FGameplayTagContainer& characterTags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetEnemyTypeString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EYEnemyType GetEnemyType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDebugAIInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetCombatTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAIVariationName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAITuningDataBP(FYAITuningRow& Data) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EYAIState GetAIState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAIEnemyTypeAsString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EYEnemyType GetAIEnemyType() const;
    
    UFUNCTION(BlueprintCallable)
    UYAIDataComponent* GetAIDataComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetAICharacterName() const;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAIAudioData(FYAIAudio& audioData) const;
    
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

