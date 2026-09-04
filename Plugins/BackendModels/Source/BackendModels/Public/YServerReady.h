#pragma once
#include "CoreMinimal.h"
#include "YServerReady.generated.h"

USTRUCT(BlueprintType)
struct FYServerReady {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString networkAddress;
    
    BACKENDMODELS_API FYServerReady();
};

