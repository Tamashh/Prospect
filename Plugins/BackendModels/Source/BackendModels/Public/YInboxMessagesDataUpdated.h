#pragma once
#include "CoreMinimal.h"
#include "YInboxMessage.h"
#include "YInboxMessagesDataUpdated.generated.h"

USTRUCT(BlueprintType)
struct FYInboxMessagesDataUpdated {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYInboxMessage> inboxMessages;
    
    BACKENDMODELS_API FYInboxMessagesDataUpdated();
};

