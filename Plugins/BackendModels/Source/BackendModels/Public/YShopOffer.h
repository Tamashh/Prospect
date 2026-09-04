#pragma once
#include "CoreMinimal.h"
#include "EYPurchaseOfferState.h"
#include "YShopOffer.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYShopOffer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString shopOfferRowId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYPurchaseOfferState purchaseState;
    
    FYShopOffer();
};

