#pragma once
#include "CoreMinimal.h"
#include "YDiscountData.generated.h"

USTRUCT(BlueprintType)
struct FYDiscountData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PercentOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FinalDiscountedPrice;
    
    YAZUREFUNCTIONSUTILS_API FYDiscountData();
};

