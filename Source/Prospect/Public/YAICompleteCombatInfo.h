#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "YAIDamagingPlayerInfo.h"
#include "YAICompleteCombatInfo.generated.h"

USTRUCT(BlueprintType)
struct FYAICompleteCombatInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FUniqueNetIdRepl, FYAIDamagingPlayerInfo> m_aiDamagingPlayerInfos;

    PROSPECT_API FYAICompleteCombatInfo();
};
