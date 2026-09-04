#pragma once
#include "CoreMinimal.h"
#include "YItemOriginBackend.generated.h"

USTRUCT(BlueprintType)
struct FYItemOriginBackend {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString T;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString P;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString G;
    
    BACKENDMODELS_API FYItemOriginBackend();
};

