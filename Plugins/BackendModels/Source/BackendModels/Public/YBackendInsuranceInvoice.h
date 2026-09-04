#pragma once
#include "CoreMinimal.h"
#include "YCurrencyItem.h"
#include "YBackendInsuranceInvoice.generated.h"

USTRUCT(BlueprintType)
struct FYBackendInsuranceInvoice {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCurrencyItem> costs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> itemInstanceIds;
    
    BACKENDMODELS_API FYBackendInsuranceInvoice();
};

