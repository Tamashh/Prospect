#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "YLeadboardPlacementRewardDropTableEntry.h"
#include "YRewardDropTableEntry.h"
#include "YRewardsRollManagerComponent.generated.h"

class UDataTable;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UYRewardsRollManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYRewardDropTableEntry> m_staticRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYLeadboardPlacementRewardDropTableEntry> m_leaderboardPlacementRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_evacuationBonusDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_diedBonusTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_matchPlayedBonusDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_leaderboardPlacementRewardDataTable;
    
public:
    UYRewardsRollManagerComponent(const FObjectInitializer& ObjectInitializer);

};

