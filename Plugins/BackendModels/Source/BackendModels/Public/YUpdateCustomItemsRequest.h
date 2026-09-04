#pragma once
#include "CoreMinimal.h"
#include "YCustomItemInfo.h"
#include "YUpdateCustomItemsRequest.generated.h"

USTRUCT(BlueprintType)
struct FYUpdateCustomItemsRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCustomItemInfo> itemsToUpdate;
    
    BACKENDMODELS_API FYUpdateCustomItemsRequest();
};

