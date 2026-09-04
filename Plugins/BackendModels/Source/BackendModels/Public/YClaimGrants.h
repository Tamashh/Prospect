#pragma once
#include "CoreMinimal.h"
#include "YClaimGrants.generated.h"

USTRUCT(BlueprintType)
struct FYClaimGrants {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> grantIds;
    
    BACKENDMODELS_API FYClaimGrants();
};

