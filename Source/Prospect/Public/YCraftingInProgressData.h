#pragma once
#include "CoreMinimal.h"
#include "YCraftingInProgressData.generated.h"

USTRUCT(BlueprintType)
struct FYCraftingInProgressData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 timePassed;
    
    PROSPECT_API FYCraftingInProgressData();
};

