#pragma once
#include "CoreMinimal.h"
#include "YGrant.h"
#include "YGrantsData.generated.h"

USTRUCT(BlueprintType)
struct FYGrantsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYGrant> grants;
    
    BACKENDMODELS_API FYGrantsData();
};

