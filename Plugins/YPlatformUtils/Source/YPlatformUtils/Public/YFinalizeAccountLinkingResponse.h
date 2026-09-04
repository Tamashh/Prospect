#pragma once
#include "CoreMinimal.h"
#include "EYAccountLinkingResultCode.h"
#include "YFinalizeAccountLinkingResponse.generated.h"

USTRUCT(BlueprintType)
struct FYFinalizeAccountLinkingResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYAccountLinkingResultCode resultCode;
    
    YPLATFORMUTILS_API FYFinalizeAccountLinkingResponse();
};

