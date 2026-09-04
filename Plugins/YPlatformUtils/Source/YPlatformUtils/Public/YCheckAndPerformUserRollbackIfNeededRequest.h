#pragma once
#include "CoreMinimal.h"
#include "YCheckAndPerformUserRollbackIfNeededRequest.generated.h"

USTRUCT(BlueprintType)
struct FYCheckAndPerformUserRollbackIfNeededRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TryBypass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LoginNonce;
    
    YPLATFORMUTILS_API FYCheckAndPerformUserRollbackIfNeededRequest();
};

