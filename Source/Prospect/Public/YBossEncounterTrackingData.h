#pragma once
#include "CoreMinimal.h"
#include "YBossEncounterActivityStats.h"
#include "YBossEncounterTrackingData.generated.h"

USTRUCT(BlueprintType)
struct FYBossEncounterTrackingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYBossEncounterActivityStats m_stats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_firstInteractionTimeStamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_lastInteractionTimeStamp;
    
    PROSPECT_API FYBossEncounterTrackingData();
};

