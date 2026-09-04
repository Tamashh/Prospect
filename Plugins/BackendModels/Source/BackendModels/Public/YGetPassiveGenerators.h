#pragma once
#include "CoreMinimal.h"
#include "YGetPassiveGenerators.generated.h"

USTRUCT(BlueprintType)
struct FYGetPassiveGenerators {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    BACKENDMODELS_API FYGetPassiveGenerators();
};

