#pragma once
#include "CoreMinimal.h"
#include "YPlayerRankUpdatedForGameMode.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYPlayerRankUpdatedForGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 oldRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 newRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 highestRank;
    
    FYPlayerRankUpdatedForGameMode();
};

