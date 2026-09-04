#pragma once
#include "CoreMinimal.h"
#include "YPlayFabStoreItemCustomData.h"
#include "YPlayfabStoreItemEntry.generated.h"

USTRUCT(BlueprintType)
struct YAZUREFUNCTIONSUTILS_API FYPlayfabStoreItemEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StoreId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Catalog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayFabStoreItemCustomData customData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> virtualCurrencyPrices;
    
    FYPlayfabStoreItemEntry();
};

