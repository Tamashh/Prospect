#pragma once
#include "CoreMinimal.h"
#include "YTimestamp.h"
#include "YBoardContractsInitData.h"
#include "YBoardsContractsInitData.generated.h"

USTRUCT(BlueprintType)
struct FYBoardsContractsInitData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYBoardContractsInitData> playerContractsBoards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYTimestamp lastBoardRefreshTimeUtc;
    
    PROSPECT_API FYBoardsContractsInitData();
};

