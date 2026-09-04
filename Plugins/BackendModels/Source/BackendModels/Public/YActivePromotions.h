#pragma once
#include "CoreMinimal.h"
#include "YShopPromotion.h"
#include "YActivePromotions.generated.h"

USTRUCT(BlueprintType)
struct FYActivePromotions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYShopPromotion> shopPromotions;
    
    BACKENDMODELS_API FYActivePromotions();
};

