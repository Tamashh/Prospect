#pragma once
#include "CoreMinimal.h"
#include "YDataTableRowBase.h"
#include "YMissionInitializationData.h"
#include "YMissionStepEntry.generated.h"

USTRUCT(BlueprintType)
struct FYMissionStepEntry : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYMissionInitializationData m_missionInitData;
    
    PROSPECT_API FYMissionStepEntry();
};

