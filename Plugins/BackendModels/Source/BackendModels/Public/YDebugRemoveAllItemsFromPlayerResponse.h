#pragma once
#include "CoreMinimal.h"
#include "YCustomItemInfo.h"
#include "YDebugRemoveAllItemsFromPlayerResponse.generated.h"

USTRUCT(BlueprintType)
struct FYDebugRemoveAllItemsFromPlayerResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCustomItemInfo> returnedItems;
    
    BACKENDMODELS_API FYDebugRemoveAllItemsFromPlayerResponse();
};

