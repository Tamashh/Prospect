#pragma once
#include "CoreMinimal.h"
#include "YBattleEyeMessageSendingStatsData.generated.h"

USTRUCT(BlueprintType)
struct FYBattleEyeMessageSendingStatsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_numMessageSent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_numMessageReceived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_numMessageAcked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_numMessageSentToBattlEye;
    
    YBATTLEEYE_API FYBattleEyeMessageSendingStatsData();
};

