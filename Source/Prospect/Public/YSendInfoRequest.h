#pragma once
#include "CoreMinimal.h"
#include "YGameServerRequest.h"
#include "YFPSMatchSummaryServerEvent.h"
#include "YSendInfoRequest.generated.h"

USTRUCT(BlueprintType)
struct FYSendInfoRequest : public FYGameServerRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SessionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYFPSMatchSummaryServerEvent m_performanceEvent;
    
    PROSPECT_API FYSendInfoRequest();
};

