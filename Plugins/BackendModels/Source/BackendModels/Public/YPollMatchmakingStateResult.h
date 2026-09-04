#pragma once
#include "CoreMinimal.h"
#include "EYPlayfabMatchmakingState.h"
#include "YPollMatchmakingStateResult.generated.h"

USTRUCT(BlueprintType)
struct FYPollMatchmakingStateResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYPlayfabMatchmakingState m_state;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_matchmakingTicket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_matchTicket;
    
    BACKENDMODELS_API FYPollMatchmakingStateResult();
};

