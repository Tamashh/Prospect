#pragma once
#include "CoreMinimal.h"
#include "YLoginQueueStateResponse.generated.h"

USTRUCT(BlueprintType)
struct FYLoginQueueStateResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 waitingUserCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Timestamp;
    
    YPLATFORMUTILS_API FYLoginQueueStateResponse();
};

