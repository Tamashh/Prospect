#pragma once
#include "CoreMinimal.h"
#include "YMatchHasEnded.generated.h"

USTRUCT(BlueprintType)
struct FYMatchHasEnded {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> users;
    
    BACKENDMODELS_API FYMatchHasEnded();
};

