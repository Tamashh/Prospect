#pragma once
#include "CoreMinimal.h"
#include "EYFaction.h"
#include "YPlayerFactionProgressionUIData.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerFactionProgressionUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYFaction m_factionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_factionLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_completeFactionReputation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_currentXpOfCurrentLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_maxXpRequiredForCurrentLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_relativeProgressBetweenCurrentLevelAndNextLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_nextLevelXp;
    
    PROSPECT_API FYPlayerFactionProgressionUIData();
};

