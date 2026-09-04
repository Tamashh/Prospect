#pragma once
#include "CoreMinimal.h"
#include "YCurrency.h"
#include "YShopOffer.h"
#include "YShopPromotion.h"
#include "YShopRelevantDataUpdated.generated.h"

USTRUCT(BlueprintType)
struct FYShopRelevantDataUpdated {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYCurrency Currency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYShopPromotion> shopPromotions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYShopOffer> shopOffers;
    
    BACKENDMODELS_API FYShopRelevantDataUpdated();
};

