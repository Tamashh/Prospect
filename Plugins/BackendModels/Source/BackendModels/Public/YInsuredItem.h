#pragma once
#include "CoreMinimal.h"
#include "EYInsuranceType.h"
#include "YInsuredItem.generated.h"

USTRUCT(BlueprintType)
struct FYInsuredItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_instanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYInsuranceType m_insurance;
    
    BACKENDMODELS_API FYInsuredItem();
};

