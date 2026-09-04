#pragma once
#include "CoreMinimal.h"
#include "YGivePlayerSeasonGamemodeRankResponse.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYGivePlayerSeasonGamemodeRankResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool success;
    
    FYGivePlayerSeasonGamemodeRankResponse();
};

