#pragma once
#include "CoreMinimal.h"
#include "YPersistentMatch.h"
#include "YListPersistentMatchesResult.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYListPersistentMatchesResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYPersistentMatch> Results;
    
    FYListPersistentMatchesResult();
};

