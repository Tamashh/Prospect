#pragma once
#include "CoreMinimal.h"
#include "YFactionContractsData.h"
#include "YTimestamp.h"
#include "YPlayerContractsInfoUpdated.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerContractsInfoUpdated {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYFactionContractsData> factionsContracts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYTimestamp lastBoardRefreshTimeUtc;
    
    BACKENDMODELS_API FYPlayerContractsInfoUpdated();
};

