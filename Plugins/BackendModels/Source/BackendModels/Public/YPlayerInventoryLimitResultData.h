#pragma once
#include "CoreMinimal.h"
#include "YPlayerInventoryLimitResultData.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerInventoryLimitResultData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 inventoryStashLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 inventoryBagLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 inventorySafeLimit;
    
    BACKENDMODELS_API FYPlayerInventoryLimitResultData();
};

