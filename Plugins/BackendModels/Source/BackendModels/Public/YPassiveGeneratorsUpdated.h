#pragma once
#include "CoreMinimal.h"
#include "YPassiveGenerator.h"
#include "YPassiveGeneratorsUpdated.generated.h"

USTRUCT(BlueprintType)
struct FYPassiveGeneratorsUpdated {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYPassiveGenerator> updatedGenerators;
    
    BACKENDMODELS_API FYPassiveGeneratorsUpdated();
};

