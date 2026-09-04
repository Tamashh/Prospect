#pragma once
#include "CoreMinimal.h"
#include "YShopOffer.h"
#include "YActiveOffers.generated.h"

USTRUCT(BlueprintType)
struct FYActiveOffers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYShopOffer> shopOffers;
    
    BACKENDMODELS_API FYActiveOffers();
};

