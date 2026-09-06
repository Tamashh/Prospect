#pragma once
#include "CoreMinimal.h"
#include "YSetActiveMission.generated.h"

USTRUCT(BlueprintType)
struct FYSetActiveMission {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString currentMissionID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 progress;

    BACKENDMODELS_API FYSetActiveMission();
};
