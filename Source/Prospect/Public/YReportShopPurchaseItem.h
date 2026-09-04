#pragma once
#include "CoreMinimal.h"
#include "YReportShopPurchaseItem.generated.h"

USTRUCT(BlueprintType)
struct FYReportShopPurchaseItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString instanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Type;
    
    PROSPECT_API FYReportShopPurchaseItem();
};

