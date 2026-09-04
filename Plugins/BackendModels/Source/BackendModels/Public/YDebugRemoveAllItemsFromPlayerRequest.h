#pragma once
#include "CoreMinimal.h"
#include "YDebugRemoveAllItemsFromPlayerRequest.generated.h"

USTRUCT(BlueprintType)
struct FYDebugRemoveAllItemsFromPlayerRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    BACKENDMODELS_API FYDebugRemoveAllItemsFromPlayerRequest();
};

