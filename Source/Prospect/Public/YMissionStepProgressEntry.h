#pragma once
#include "CoreMinimal.h"
#include "EYMissionResultType.h"
#include "YMissionStepProgressEntry.generated.h"

USTRUCT(BlueprintType)
struct FYMissionStepProgressEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_stepHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYMissionResultType m_result;
    
    PROSPECT_API FYMissionStepProgressEntry();
};

