#pragma once
#include "CoreMinimal.h"
#include "YAbilityAnalyticsEvent.h"
#include "YAbilityAnalyticsPerPlayer.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FYAbilityAnalyticsPerPlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_playerNetID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_relevantPlayerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYAbilityAnalyticsEvent> m_abilities;
    
    PROSPECT_API FYAbilityAnalyticsPerPlayer();
};

