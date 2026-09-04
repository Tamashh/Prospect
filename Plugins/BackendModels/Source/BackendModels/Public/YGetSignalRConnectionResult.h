#pragma once
#include "CoreMinimal.h"
#include "YGetSignalRConnectionResult.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYGetSignalRConnectionResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString URL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AccessToken;
    
    FYGetSignalRConnectionResult();
};

