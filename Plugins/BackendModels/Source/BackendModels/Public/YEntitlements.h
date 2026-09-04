#pragma once
#include "CoreMinimal.h"
#include "YEntitlements.generated.h"

USTRUCT(BlueprintType)
struct FYEntitlements {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> entitlements;
    
    BACKENDMODELS_API FYEntitlements();
};

