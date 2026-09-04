#pragma once
#include "CoreMinimal.h"
#include "YChatMessageInputData.h"
#include "YChatHistoryEntry.generated.h"

USTRUCT(BlueprintType)
struct FYChatHistoryEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYChatMessageInputData m_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_timeSent;
    
    PROSPECT_API FYChatHistoryEntry();
};

