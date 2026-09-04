#pragma once
#include "CoreMinimal.h"
#include "YContractStatusChangeInfo.generated.h"

USTRUCT(BlueprintType)
struct FYContractStatusChangeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_contractIdActivated;
    
    PROSPECT_API FYContractStatusChangeInfo();
};

