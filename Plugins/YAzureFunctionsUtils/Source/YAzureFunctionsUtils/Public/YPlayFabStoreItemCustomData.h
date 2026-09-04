#pragma once
#include "CoreMinimal.h"
#include "YDiscountData.h"
#include "YPlayFabStoreItemCustomData.generated.h"

USTRUCT(BlueprintType)
struct YAZUREFUNCTIONSUTILS_API FYPlayFabStoreItemCustomData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYDiscountData discountData;
    
    FYPlayFabStoreItemCustomData();
};

