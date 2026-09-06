#pragma once
#include "CoreMinimal.h"
#include "YUpdateLoadoutPresetResponse.generated.h"

USTRUCT(BlueprintType)
struct FYUpdateLoadoutPresetResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;

    BACKENDMODELS_API FYUpdateLoadoutPresetResponse();
};
