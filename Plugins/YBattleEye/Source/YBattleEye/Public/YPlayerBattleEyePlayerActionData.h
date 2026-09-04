#pragma once
#include "CoreMinimal.h"
#include "EYPlayerBattleEyeActionType.h"
#include "YPlayerBattleEyePlayerActionData.generated.h"

USTRUCT(BlueprintType)
struct YBATTLEEYE_API FYPlayerBattleEyePlayerActionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_playerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_reason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYPlayerBattleEyeActionType m_action;
    
    FYPlayerBattleEyePlayerActionData();
};

