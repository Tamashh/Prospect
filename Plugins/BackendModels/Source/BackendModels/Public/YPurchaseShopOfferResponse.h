#pragma once
#include "CoreMinimal.h"
#include "EYPurchaseOfferResult.h"
#include "YShopOffer.h"
#include "YPurchaseShopOfferResponse.generated.h"

USTRUCT(BlueprintType)
struct FYPurchaseShopOfferResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYPurchaseOfferResult returnResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYShopOffer shopOffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TransactionId;
    
    BACKENDMODELS_API FYPurchaseShopOfferResponse();
};

