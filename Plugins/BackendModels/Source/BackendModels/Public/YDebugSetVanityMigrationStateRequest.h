#pragma once
#include "CoreMinimal.h"
#include "YDebugSetVanityMigrationStateRequest.generated.h"

USTRUCT(BlueprintType)
struct FYDebugSetVanityMigrationStateRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString State;

    BACKENDMODELS_API FYDebugSetVanityMigrationStateRequest();
};
