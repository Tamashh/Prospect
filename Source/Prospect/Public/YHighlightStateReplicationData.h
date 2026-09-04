#pragma once
#include "CoreMinimal.h"
#include "YHighlightStateData.h"
#include "YHighlightStateReplicationData.generated.h"

USTRUCT(BlueprintType)
struct FYHighlightStateReplicationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYHighlightStateData m_stateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_predictionKey;
    
    PROSPECT_API FYHighlightStateReplicationData();
};

