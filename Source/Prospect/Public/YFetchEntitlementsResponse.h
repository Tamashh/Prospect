#pragma once
#include "CoreMinimal.h"
#include "YFetchEntitlementsResponse.generated.h"

USTRUCT(BlueprintType)
struct FYFetchEntitlementsResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ownedEntitlements;
    
    PROSPECT_API FYFetchEntitlementsResponse();
};

