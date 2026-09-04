#pragma once
#include "CoreMinimal.h"
#include "YPremiumInsuranceData.generated.h"

USTRUCT(BlueprintType)
struct FYPremiumInsuranceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_initialSlotCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_compoundingSlotCostScalar;
    
    PROSPECT_API FYPremiumInsuranceData();
};

