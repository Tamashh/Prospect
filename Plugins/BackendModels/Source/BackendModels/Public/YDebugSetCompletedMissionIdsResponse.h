#pragma once
#include "CoreMinimal.h"
#include "YDebugSetCompletedMissionIdsResponse.generated.h"

USTRUCT(BlueprintType)
struct FYDebugSetCompletedMissionIdsResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> completedMissionIds;

    BACKENDMODELS_API FYDebugSetCompletedMissionIdsResponse();
};
