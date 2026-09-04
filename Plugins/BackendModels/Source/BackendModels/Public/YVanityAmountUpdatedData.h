#pragma once
#include "CoreMinimal.h"
#include "YVanityBackendItemInfo.h"
#include "YVanityAmountUpdatedData.generated.h"

USTRUCT(BlueprintType)
struct FYVanityAmountUpdatedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYVanityBackendItemInfo> updatedVanityItems;
    
    BACKENDMODELS_API FYVanityAmountUpdatedData();
};

