#pragma once
#include "CoreMinimal.h"
#include "YActivateFreeLoadoutResponse.generated.h"

USTRUCT(BlueprintType)
struct FYActivateFreeLoadoutResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsActive;

    BACKENDMODELS_API FYActivateFreeLoadoutResponse();
};

