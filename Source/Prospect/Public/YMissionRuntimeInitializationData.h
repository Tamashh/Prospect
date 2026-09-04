#pragma once
#include "CoreMinimal.h"
#include "YMissionState.h"
#include "YMissionRuntimeInitializationData.generated.h"

USTRUCT(BlueprintType)
struct FYMissionRuntimeInitializationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYMissionState m_missionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_progress;
    
    PROSPECT_API FYMissionRuntimeInitializationData();
};

