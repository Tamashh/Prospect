#pragma once
#include "CoreMinimal.h"
#include "YPassiveGenerator.h"
#include "YGeneratorsUpdated.generated.h"

USTRUCT(BlueprintType)
struct FYGeneratorsUpdated {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYPassiveGenerator> updatedGenerators;

    BACKENDMODELS_API FYGeneratorsUpdated();
};

