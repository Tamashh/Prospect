#pragma once
#include "CoreMinimal.h"
#include "YDebugSetCompletedMissionIdsRequest.generated.h"

USTRUCT(BlueprintType)
struct FYDebugSetCompletedMissionIdsRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> completedMissionIds;

    BACKENDMODELS_API FYDebugSetCompletedMissionIdsRequest();
};
