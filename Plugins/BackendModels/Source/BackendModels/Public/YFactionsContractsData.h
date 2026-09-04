#pragma once
#include "CoreMinimal.h"
#include "YFactionContractsData.h"
#include "YTimestamp.h"
#include "YFactionsContractsData.generated.h"

USTRUCT(BlueprintType)
struct FYFactionsContractsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYFactionContractsData> boards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYTimestamp lastBoardRefreshTimeUtc;
    
    BACKENDMODELS_API FYFactionsContractsData();
};

