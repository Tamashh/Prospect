#pragma once
#include "CoreMinimal.h"
#include "YGivePlayerSeasonGamemodeRankRequest.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYGivePlayerSeasonGamemodeRankRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rankIncrement;
    
    FYGivePlayerSeasonGamemodeRankRequest();
};

