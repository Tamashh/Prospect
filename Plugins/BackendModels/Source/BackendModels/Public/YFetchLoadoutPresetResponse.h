#pragma once
#include "CoreMinimal.h"
#include "YLoadoutPresetData.h"
#include "YFetchLoadoutPresetResponse.generated.h"

USTRUCT(BlueprintType)
struct FYFetchLoadoutPresetResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYLoadoutPresetData> loadoutPresetData;

    BACKENDMODELS_API FYFetchLoadoutPresetResponse();
};
