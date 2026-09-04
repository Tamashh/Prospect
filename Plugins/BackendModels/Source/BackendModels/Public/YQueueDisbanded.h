#pragma once
#include "CoreMinimal.h"
#include "YQueueDisbanded.generated.h"

USTRUCT(BlueprintType)
struct FYQueueDisbanded {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Region;
    
    BACKENDMODELS_API FYQueueDisbanded();
};

