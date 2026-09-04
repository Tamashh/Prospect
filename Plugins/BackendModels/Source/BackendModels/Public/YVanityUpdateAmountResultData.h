#pragma once
#include "CoreMinimal.h"
#include "EYVanityUpdateResult.h"
#include "YVanityAmountUpdatedData.h"
#include "YVanityUpdateAmountResultData.generated.h"

USTRUCT(BlueprintType)
struct FYVanityUpdateAmountResultData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYVanityUpdateResult returnResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYVanityAmountUpdatedData vanityAmountUpdated;
    
    BACKENDMODELS_API FYVanityUpdateAmountResultData();
};

