#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EYPlayerMatchState.h"
#include "EYRewardType.h"
#include "OnRewardsUpdatedDelegate.h"
#include "YRewardEntry.h"
#include "YPlayerRewardsComponent.generated.h"

class AYPlayerState;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UYPlayerRewardsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NewInMatchRewards, meta=(AllowPrivateAccess=true))
    TArray<FYRewardEntry> m_inMatchRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NewMatchResultRewards, meta=(AllowPrivateAccess=true))
    TArray<FYRewardEntry> m_matchResultRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_materialsMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_currenciesMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_factionProgressMutiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_seasonXPMutiplier;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRewardsUpdated OnMatchResultRewardsUpdated;
    
    UYPlayerRewardsComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_NewVictoryPoints();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NewTotalVictoryPointsLevel();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NewMatchResultRewards();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NewInMatchRewards();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerMatchStateChanged(EYPlayerMatchState newState, AYPlayerState* PlayerState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInMatchRewardsCount(EYRewardType rewardType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FYRewardEntry> GetInMatchRewards(EYRewardType rewardType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FYRewardEntry> GetAllMatchRewardsResult(EYRewardType rewardType) const;
    
};

