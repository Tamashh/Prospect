#pragma once
#include "CoreMinimal.h"
#include "YFetchEntitlements.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYFetchEntitlements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString epicAccountId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString epicAccessToken;
    
    FYFetchEntitlements();
};

