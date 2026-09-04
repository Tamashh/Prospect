#pragma once
#include "CoreMinimal.h"
#include "YStoreRotationDataResponse.generated.h"

USTRUCT(BlueprintType)
struct FYStoreRotationDataResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StoreId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString expirationData;
    
    BACKENDMODELS_API FYStoreRotationDataResponse();
};

