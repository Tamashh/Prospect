#pragma once
#include "CoreMinimal.h"
#include "YPlayerRankedGamemodeData.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYPlayerRankedGamemodeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 highestRank;
    
    FYPlayerRankedGamemodeData();
};

