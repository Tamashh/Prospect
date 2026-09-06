#pragma once
#include "CoreMinimal.h"
#include "EYCustomizationBodyType.h"
#include "EYMatchState.h"
#include "EYPlayerMatchFinishedResult.h"
#include "EYPlayerMatchState.h"
#include "OnCosmeticVisualizationChangedDelegate.h"
#include "OnFactionChangedDelegate.h"
#include "OnFactionProgressUpdatedDelegate.h"
#include "OnPlayerMatchFinishedResultDelegate.h"
#include "OnUniqueIdSetDelegate.h"
#include "YActiveWeaponCharacterInitializationData.h"
#include "YDealtDamageData.h"
#include "YMatchFinishedInfo.h"
#include "YPlayerCosmeticReplicatedData.h"
#include "YPlayerStateBase.h"
#include "YProspectorLevelData.h"
#include "YPlayerState.generated.h"

class AActor;
class AYPlayerCharacter;
class AYPlayerController;
class AYPlayerController_Match;
class AYPlayerState;
class UYHealthComponent;
class UYPlayerBIDataComponent;
class UYPlayerRewardsComponent;
class UYPlayerStatsChallengesComponent;
class UYPlayerStatsDeathsComponent;
class UYPlayerStatsKillsComponent;

UCLASS(Blueprintable)
class AYPlayerState : public AYPlayerStateBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYPlayerCharacterSetDelegate, AYPlayerCharacter*, playerCharacter);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnCharacterBodyTypeAvailable, EYCustomizationBodyType, bodyType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPlayerStateDeactivated);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerMatchStateChangedSignature, EYPlayerMatchState, newState, AYPlayerState*, PlayerState);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerMatchStateChangedSignature OnPlayerMatchStateChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerCharacterSetDelegate OnPlayerCharacterSetDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AYPlayerCharacter* m_playerCharacter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFactionChanged OnFactionSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUniqueIdSet OnUniqueIdSetEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFactionProgressUpdated OnFactionProgressUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerMatchFinishedResult OnBeforeFinishedMatch;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerMatchFinishedResult OnFinishedMatchResult;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerMatchFinishedResult OnAfterFinishedMatchResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_matchPlayerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_lastImpactSurveillanceTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool m_hasTrophy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_hasRedTrophy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_hasGreenTrophy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isDummyPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_rewardsReceived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_leftMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_leftMatchWithoutFinishing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AYPlayerState> m_killer;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AYPlayerState>> m_alliesAtDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYDealtDamageData m_deathData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCosmeticVisualizationChanged OnCosmeticStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CosmeticDataChanged, meta=(AllowPrivateAccess=true))
    FYPlayerCosmeticReplicatedData m_replicatedCosmeticData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_timeFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_hasBeenKickedReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYPlayerStatsDeathsComponent* m_playerStatsDeathsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYPlayerStatsKillsComponent* m_playerStatsKillsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYPlayerStatsChallengesComponent* m_playerStatsChallengesComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerMatchState, meta=(AllowPrivateAccess=true))
    EYPlayerMatchState m_playerMatchState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerMatchFinishedResult, meta=(AllowPrivateAccess=true))
    FYMatchFinishedInfo m_playerMatchFinishedResultInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UYPlayerRewardsComponent* m_playerRewardsComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FactionId, meta=(AllowPrivateAccess=true))
    FName m_factionId;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FYActiveWeaponCharacterInitializationData m_equippedWeaponData;
    
public:
    AYPlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AYPlayerCharacter* TryGetYPlayerCharacter() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetSelectedFaction(FName factionId);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerMatchState(EYPlayerMatchState newState, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    void SetEquippedWeaponData(const FYActiveWeaponCharacterInitializationData& equippedWeaponData);
    
    UFUNCTION(BlueprintCallable)
    void OnTakeDamage(const FYDealtDamageData& Data);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerMatchState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerMatchFinishedResult();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_FactionId();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_CosmeticDataChanged(const FYPlayerCosmeticReplicatedData& oldData) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMatchStateUpdated(EYMatchState matchState);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDeath(UYHealthComponent* healthComponent, AActor* deathInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocallyControlled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AYPlayerController_Match* GetYPlayerControllerMatch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AYPlayerController* GetYPlayerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSelectedFaction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UYPlayerStatsKillsComponent* GetPlayerStatsKillsComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UYPlayerStatsDeathsComponent* GetPlayerStatsDeathsComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UYPlayerStatsChallengesComponent* GetPlayerStatsChallengesComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UYPlayerRewardsComponent* GetPlayerRewardsComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EYPlayerMatchState GetPlayerMatchState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EYPlayerMatchFinishedResult GetPlayerMatchFinishedResult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UYPlayerBIDataComponent* GetPlayerBIDataComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYProspectorLevelData GetInitialProspectorLevelProgress() const;
    
    UFUNCTION(BlueprintCallable)
    FYActiveWeaponCharacterInitializationData GetEquippedWeaponData() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void CachePlayerSeasonLevelAndXP(int32 Level, int32 xp);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void CachePlayerProspectorProgress(FYProspectorLevelData& prospectorLevelData);
    
};

