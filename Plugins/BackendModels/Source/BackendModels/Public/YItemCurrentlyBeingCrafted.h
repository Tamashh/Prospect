#pragma once
#include "CoreMinimal.h"
#include "YTimestamp.h"
#include "YItemCurrentlyBeingCrafted.generated.h"

USTRUCT(BlueprintType)
struct FYItemCurrentlyBeingCrafted {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYTimestamp utcTimestampWhenCraftingStarted;
    
    BACKENDMODELS_API FYItemCurrentlyBeingCrafted();
};

