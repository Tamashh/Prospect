#pragma once
#include "CoreMinimal.h"
#include "YReportShopPurchaseItem.h"
#include "YReportShopPurchaseRequest.generated.h"

USTRUCT(BlueprintType)
struct FYReportShopPurchaseRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYReportShopPurchaseItem> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString bundleOrItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Price;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isRealMoneyPurchase;
    
    PROSPECT_API FYReportShopPurchaseRequest();
};

