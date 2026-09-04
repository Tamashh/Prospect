#pragma once
#include "CoreMinimal.h"
#include "YCustomItemInfo.h"
#include "YItemsUpdated.generated.h"

USTRUCT(BlueprintType)
struct FYItemsUpdated {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCustomItemInfo> updatedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    BACKENDMODELS_API FYItemsUpdated();
};

