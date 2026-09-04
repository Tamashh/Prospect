#pragma once
#include "CoreMinimal.h"
#include "YPlayfabMessage.h"
#include "YPendingPlayfabMessage.generated.h"

USTRUCT(BlueprintType)
struct FYPendingPlayfabMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayfabMessage m_message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isServer;
    
    YPLAYFABSERVICES_API FYPendingPlayfabMessage();
};

