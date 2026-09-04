#pragma once
#include "CoreMinimal.h"
#include "YCurrencyItem.h"
#include "YCustomItemInfo.h"
#include "YPassiveGenerator.h"
#include "YPassiveGeneratorCrateResultsReceived.generated.h"

USTRUCT(BlueprintType)
struct FYPassiveGeneratorCrateResultsReceived {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPassiveGenerator Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCurrencyItem> currencies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCustomItemInfo> customItems;
    
    BACKENDMODELS_API FYPassiveGeneratorCrateResultsReceived();
};

