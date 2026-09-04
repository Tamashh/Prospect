#pragma once
#include "CoreMinimal.h"
#include "YChatLog.generated.h"

USTRUCT(BlueprintType)
struct FYChatLog {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_sender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_message;
    
    PROSPECT_API FYChatLog();
};

