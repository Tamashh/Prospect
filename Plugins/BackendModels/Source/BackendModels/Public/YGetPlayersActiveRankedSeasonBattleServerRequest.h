#pragma once
#include "CoreMinimal.h"
#include "YGetPlayersActiveRankedSeasonBattleServerRequest.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYGetPlayersActiveRankedSeasonBattleServerRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> otherPlayersIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString playerOwnId;
    
    FYGetPlayersActiveRankedSeasonBattleServerRequest();
};

