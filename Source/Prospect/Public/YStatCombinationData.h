#pragma once
#include "CoreMinimal.h"
#include "EYMatchmakeGameModeType.h"
#include "EYActivityType.h"
#include "YEOSStatData.h"
#include "YStatCombinationPair.h"
#include "YStatCombinationData.generated.h"

USTRUCT(BlueprintType)
struct FYStatCombinationData : public FYEOSStatData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYStatCombinationPair> m_statCalculation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_anyGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_anyActivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYMatchmakeGameModeType m_gameModeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYActivityType m_activityType;
    
    PROSPECT_API FYStatCombinationData();
};

