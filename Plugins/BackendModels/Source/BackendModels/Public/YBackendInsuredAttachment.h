#pragma once
#include "CoreMinimal.h"
#include "YBackendInsuredAttachment.generated.h"

USTRUCT(BlueprintType)
struct FYBackendInsuredAttachment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString baseItemInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString attachmentId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 modShortId;
    
    BACKENDMODELS_API FYBackendInsuredAttachment();
};

