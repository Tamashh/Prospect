#pragma once
#include "CoreMinimal.h"
#include "YCustomItemInfo.h"
#include "YDebugRemoveAllItemsByTypeFromPlayerResponse.generated.h"

USTRUCT(BlueprintType)
struct FYDebugRemoveAllItemsByTypeFromPlayerResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCustomItemInfo> returnedItems;
    
    BACKENDMODELS_API FYDebugRemoveAllItemsByTypeFromPlayerResponse();
};

