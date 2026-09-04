#pragma once
#include "CoreMinimal.h"
#include "YServerShutdown.generated.h"

USTRUCT(BlueprintType)
struct FYServerShutdown {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Region;
    
    BACKENDMODELS_API FYServerShutdown();
};

