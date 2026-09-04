#pragma once
#include "CoreMinimal.h"
#include "EYClaimGrantState.h"
#include "YGrant.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYGrant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString grantRowId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYClaimGrantState claimState;
    
    FYGrant();
};

