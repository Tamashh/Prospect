#pragma once
#include "CoreMinimal.h"
#include "YCheckClientVersionUpToDateRequestRequest.generated.h"

USTRUCT(BlueprintType)
struct FYCheckClientVersionUpToDateRequestRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TryBypass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LoginNonce;
    
    YPLATFORMUTILS_API FYCheckClientVersionUpToDateRequestRequest();
};

