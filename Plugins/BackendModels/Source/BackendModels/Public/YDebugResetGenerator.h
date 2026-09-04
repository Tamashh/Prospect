#pragma once
#include "CoreMinimal.h"
#include "YDebugResetGenerator.generated.h"

USTRUCT(BlueprintType)
struct FYDebugResetGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString generatorId;
    
    BACKENDMODELS_API FYDebugResetGenerator();
};

