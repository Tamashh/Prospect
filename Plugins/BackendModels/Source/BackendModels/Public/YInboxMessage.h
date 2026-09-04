#pragma once
#include "CoreMinimal.h"
#include "YAttachment.h"
#include "YTimestamp.h"
#include "YInboxMessage.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYInboxMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString inboxMessageRowId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYAttachment> attachments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYTimestamp receivedDate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool hasRead;
    
    FYInboxMessage();
};

