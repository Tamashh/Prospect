#pragma once
#include "CoreMinimal.h"
#include "YDebugPurchaseOffer.generated.h"

USTRUCT(BlueprintType)
struct FYDebugPurchaseOffer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString shopOfferId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 quantity;
    
    BACKENDMODELS_API FYDebugPurchaseOffer();
};

