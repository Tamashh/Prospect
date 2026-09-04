#pragma once
#include "CoreMinimal.h"
#include "YBoardContractInitData.generated.h"

USTRUCT(BlueprintType)
struct FYBoardContractInitData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString contractId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool contractIsLockedDueToLowFactionReputation;
    
    PROSPECT_API FYBoardContractInitData();
};

