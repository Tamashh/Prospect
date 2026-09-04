#pragma once
#include "CoreMinimal.h"
#include "YScoreData.generated.h"

USTRUCT(BlueprintType)
struct FYScoreData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_placement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_victoryPoints;
    
    PROSPECT_API FYScoreData();
};

