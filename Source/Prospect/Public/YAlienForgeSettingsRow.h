#pragma once
#include "CoreMinimal.h"
#include "EYAlienForgeCanItemBeForgedState.h"
#include "EYItemRarityType.h"
#include "YDataTableRowBase.h"
#include "YWeightedRewardAndAmount.h"
#include "YAlienForgeSettingsRow.generated.h"

USTRUCT(BlueprintType)
struct PROSPECT_API FYAlienForgeSettingsRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_requiredAmountCatalyst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYItemRarityType, int32> m_raritiesToAmountMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYItemRarityType, int32> m_raritiesToTimerMapBaseItemAndCatalyst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYItemRarityType, int32> m_raritiesToTimerMapLotteryTicket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYItemRarityType, int32> m_raritiesToProbabilityMapLotteryTicket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ingotsTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_maxAmountOfInputItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_defaultTimerValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYWeightedRewardAndAmount> m_possibleSideProductsAndWeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EYAlienForgeCanItemBeForgedState> m_forgingProcessesWithSideProducts;
    
    FYAlienForgeSettingsRow();
};

