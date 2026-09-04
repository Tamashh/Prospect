#pragma once
#include "CoreMinimal.h"
#include "YStoreRotationDataResponse.h"
#include "YStoresRotationDataResponse.generated.h"

USTRUCT(BlueprintType)
struct FYStoresRotationDataResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYStoreRotationDataResponse dailyStoreData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYStoreRotationDataResponse weeklyStoreData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
    BACKENDMODELS_API FYStoresRotationDataResponse();
};

