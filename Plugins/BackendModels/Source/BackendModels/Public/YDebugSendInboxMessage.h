#pragma once
#include "CoreMinimal.h"
#include "EYAttachmentType.h"
#include "YDebugSendInboxMessage.generated.h"

USTRUCT(BlueprintType)
struct FYDebugSendInboxMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString messageRowId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYAttachmentType attachmentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString attachmentTypeRowId;
    
    BACKENDMODELS_API FYDebugSendInboxMessage();
};

