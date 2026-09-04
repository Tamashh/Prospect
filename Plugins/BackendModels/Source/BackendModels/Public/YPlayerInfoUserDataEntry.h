#pragma once
#include "CoreMinimal.h"
#include "YPlayerInfoUserDataEntry.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerInfoUserDataEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 inventoryStashLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 inventoryBagLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 inventorySafeLimit;
    
    BACKENDMODELS_API FYPlayerInfoUserDataEntry();
};

