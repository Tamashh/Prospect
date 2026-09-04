#pragma once
#include "CoreMinimal.h"
#include "EYMissionResultType.h"
#include "YMissionReplicatedStateData.generated.h"

USTRUCT(BlueprintType)
struct FYMissionReplicatedStateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_currentStepIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_previousStepIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_missionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYMissionResultType m_resultType;
    
    PROSPECT_API FYMissionReplicatedStateData();
};

