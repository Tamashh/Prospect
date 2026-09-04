#pragma once
#include "CoreMinimal.h"
#include "YPlayerRankedSeasonGamemodeData.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYPlayerRankedSeasonGamemodeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 highestRank;
    
    FYPlayerRankedSeasonGamemodeData();
};

