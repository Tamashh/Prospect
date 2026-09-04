#pragma once
#include "CoreMinimal.h"
#include "EYPlayerEncounterType.h"
#include "YBattleLogTuning.generated.h"

USTRUCT(BlueprintType)
struct FYBattleLogTuning {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_distanceVoIP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_encounterTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_delayFinalizeEncounters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYPlayerEncounterType, float> m_encounterTimePerType;
    
    PROSPECT_API FYBattleLogTuning();
};

