#pragma once
#include "CoreMinimal.h"
#include "YMessage.h"
#include "YChatMessageInputData.generated.h"

USTRUCT(BlueprintType)
struct FYChatMessageInputData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYMessage m_message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_propogateDataToChatAPI;
    
    PROSPECT_API FYChatMessageInputData();
};

