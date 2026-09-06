#pragma once
#include "CoreMinimal.h"
#include "YPlayerKillingAIEvent.h"
#include "YPlayerDamagingAIsInfo.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerDamagingAIsInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FYPlayerKillingAIEvent> m_playerDamagingAIInfos;

    PROSPECT_API FYPlayerDamagingAIsInfo();
};
