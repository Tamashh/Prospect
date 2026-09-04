#pragma once
#include "CoreMinimal.h"
#include "EYMatchmakeGameModeType.h"
#include "Engine/DataTable.h"
#include "EYActivityType.h"
#include "EYStatOperator.h"
#include "YStatCombinationPair.generated.h"

USTRUCT(BlueprintType)
struct FYStatCombinationPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_statRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYMatchmakeGameModeType m_gameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYActivityType m_activityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYStatOperator m_statOperator;
    
    PROSPECT_API FYStatCombinationPair();
};

