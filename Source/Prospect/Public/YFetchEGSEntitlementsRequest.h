#pragma once
#include "CoreMinimal.h"
#include "YFetchEGSEntitlementsRequest.generated.h"

USTRUCT(BlueprintType)
struct FYFetchEGSEntitlementsRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString epicAccessToken;
    
    PROSPECT_API FYFetchEGSEntitlementsRequest();
};

