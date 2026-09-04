#pragma once
#include "CoreMinimal.h"
#include "YGameServerRequest.h"
#include "YPlayerKillInfo.h"
#include "YUpdateKillsForPlayerRequest.generated.h"

USTRUCT(BlueprintType)
struct FYUpdateKillsForPlayerRequest : public FYGameServerRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString killerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYPlayerKillInfo> playerKills;
    
    BACKENDMODELS_API FYUpdateKillsForPlayerRequest();
};

