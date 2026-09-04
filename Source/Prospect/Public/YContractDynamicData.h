#pragma once
#include "CoreMinimal.h"
#include "EYContractStatus.h"
#include "YContractDynamicData.generated.h"

USTRUCT(BlueprintType)
struct FYContractDynamicData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_contractId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_contractCurrentProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYContractStatus m_contractStatus;
    
    PROSPECT_API FYContractDynamicData();
};

