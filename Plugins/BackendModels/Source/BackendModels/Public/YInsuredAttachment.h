#pragma once
#include "CoreMinimal.h"
#include "YInsuredAttachment.generated.h"

USTRUCT(BlueprintType)
struct FYInsuredAttachment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_baseItemInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_attachmentId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_modShortId;
    
    BACKENDMODELS_API FYInsuredAttachment();
};

