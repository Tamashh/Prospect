#pragma once
#include "CoreMinimal.h"
#include "YBasicInsuranceData.generated.h"

USTRUCT(BlueprintType)
struct FYBasicInsuranceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_costScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_payoutScalar;
    
    PROSPECT_API FYBasicInsuranceData();
};

