#pragma once
#include "CoreMinimal.h"
#include "YGetPlayersActiveRankedSeasonClientRequest.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYGetPlayersActiveRankedSeasonClientRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> otherPlayersIds;
    
    FYGetPlayersActiveRankedSeasonClientRequest();
};

