#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "YStoreRotationData.generated.h"

USTRUCT(BlueprintType)
struct FYStoreRotationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StoreId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime expirationData;
    
    BACKENDMODELS_API FYStoreRotationData();
};

