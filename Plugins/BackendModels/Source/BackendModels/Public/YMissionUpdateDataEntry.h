#pragma once
#include "CoreMinimal.h"
#include "YCompositeQuestProgress.h"
#include "YMissionState.h"
#include "YMissionUpdateDataEntry.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYMissionUpdateDataEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYMissionState missionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCompositeQuestProgress> compositeProgress;
    
    FYMissionUpdateDataEntry();
};

