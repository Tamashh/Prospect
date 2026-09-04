#pragma once
#include "CoreMinimal.h"
#include "EYChannelType.h"
#include "YJoinChannelRequestData.generated.h"

USTRUCT(BlueprintType)
struct FYJoinChannelRequestData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYChannelType m_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_channelId;
    
    PROSPECT_API FYJoinChannelRequestData();
};

