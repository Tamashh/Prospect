#pragma once
#include "CoreMinimal.h"
#include "YGetAllPlayfabUserDataResult.generated.h"

USTRUCT(BlueprintType)
struct FYGetAllPlayfabUserDataResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool success;
    
    BACKENDMODELS_API FYGetAllPlayfabUserDataResult();
};

