#pragma once
#include "CoreMinimal.h"
#include "YContractChainProgressInfo.generated.h"

USTRUCT(BlueprintType)
struct FYContractChainProgressInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_progressCurrent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_progressMax;
    
    PROSPECT_API FYContractChainProgressInfo();
};

