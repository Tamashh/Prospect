#pragma once
#include "CoreMinimal.h"
#include "YPlayfabStoreItemEntry.h"
#include "YPlayfabStoreItemsResult.generated.h"

USTRUCT(BlueprintType)
struct YAZUREFUNCTIONSUTILS_API FYPlayfabStoreItemsResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StoreId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CatalogVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYPlayfabStoreItemEntry> storeItems;
    
    FYPlayfabStoreItemsResult();
};

