#pragma once
#include "CoreMinimal.h"
#include "YPurchaseShopOffer.generated.h"

USTRUCT(BlueprintType)
struct FYPurchaseShopOffer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString shopOfferId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 quantity;
    
    BACKENDMODELS_API FYPurchaseShopOffer();
};

