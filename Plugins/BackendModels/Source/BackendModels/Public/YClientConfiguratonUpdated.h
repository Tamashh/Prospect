#pragma once
#include "CoreMinimal.h"
#include "YClientConfiguration.h"
#include "YClientConfiguratonUpdated.generated.h"

USTRUCT(BlueprintType)
struct FYClientConfiguratonUpdated {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYClientConfiguration config;
    
    BACKENDMODELS_API FYClientConfiguratonUpdated();
};

