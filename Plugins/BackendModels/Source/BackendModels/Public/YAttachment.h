#pragma once
#include "CoreMinimal.h"
#include "EYAttachmentType.h"
#include "YAttachment.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYAttachment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYAttachmentType attachmentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString attachmentTypeId;
    
    FYAttachment();
};

