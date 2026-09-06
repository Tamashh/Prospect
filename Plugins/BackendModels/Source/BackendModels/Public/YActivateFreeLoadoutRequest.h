#pragma once
#include "CoreMinimal.h"
#include "YActivateFreeLoadoutRequest.generated.h"

USTRUCT(BlueprintType)
struct FYActivateFreeLoadoutRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsActive;

    BACKENDMODELS_API FYActivateFreeLoadoutRequest();
};
