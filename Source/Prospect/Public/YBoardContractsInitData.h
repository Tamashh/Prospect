#pragma once
#include "CoreMinimal.h"
#include "EYFaction.h"
#include "YBoardContractInitData.h"
#include "YBoardContractsInitData.generated.h"

USTRUCT(BlueprintType)
struct FYBoardContractsInitData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYFaction boardFaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYBoardContractInitData> playerBoardContractsIncludingActiveOnes;
    
    PROSPECT_API FYBoardContractsInitData();
};

