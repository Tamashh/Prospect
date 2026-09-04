#pragma once
#include "CoreMinimal.h"
#include "YCheckAndPerformSeasonWipeIfNeededRequest.generated.h"

USTRUCT(BlueprintType)
struct FYCheckAndPerformSeasonWipeIfNeededRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TryBypass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LoginNonce;
    
    YPLATFORMUTILS_API FYCheckAndPerformSeasonWipeIfNeededRequest();
};

