#pragma once
#include "CoreMinimal.h"
#include "YLoginQueueStateRequest.generated.h"

USTRUCT(BlueprintType)
struct FYLoginQueueStateRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Region;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TryBypass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LoginNonce;
    
    YPLATFORMUTILS_API FYLoginQueueStateRequest();
};

