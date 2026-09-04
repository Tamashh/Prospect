#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "YAICombatAnalyticsEvent.h"
#include "YAIPerPlayerCombatData.h"
#include "YAICombatAnalyticsData.generated.h"

USTRUCT(BlueprintType)
struct FYAICombatAnalyticsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYAICombatAnalyticsEvent m_aiCombatAnalyticsEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FUniqueNetIdRepl, FYAIPerPlayerCombatData> m_aiCombatDataPerPlayer;
    
    PROSPECT_API FYAICombatAnalyticsData();
};

