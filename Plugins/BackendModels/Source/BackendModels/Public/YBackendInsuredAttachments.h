#pragma once
#include "CoreMinimal.h"
#include "YBackendInsuredAttachment.h"
#include "YBackendInsuredAttachments.generated.h"

USTRUCT(BlueprintType)
struct FYBackendInsuredAttachments {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYBackendInsuredAttachment> attachments;
    
    BACKENDMODELS_API FYBackendInsuredAttachments();
};

