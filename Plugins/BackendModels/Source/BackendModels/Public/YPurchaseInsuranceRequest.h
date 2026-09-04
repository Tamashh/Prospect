#pragma once
#include "CoreMinimal.h"
#include "YInsuredItem.h"
#include "YPurchaseInsuranceRequest.generated.h"

USTRUCT(BlueprintType)
struct FYPurchaseInsuranceRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_tokens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYInsuredItem> m_items;
    
    BACKENDMODELS_API FYPurchaseInsuranceRequest();
};

