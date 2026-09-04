#pragma once
#include "CoreMinimal.h"
#include "YPlayerRankedGamemodeData.h"
#include "YPlayerRankedSeasonData.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYPlayerRankedSeasonData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYPlayerRankedGamemodeData> playerRankedGamemodesData;
    
    FYPlayerRankedSeasonData();
};

