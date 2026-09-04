#pragma once
#include "CoreMinimal.h"
#include "YDebugRemoveAllItemsByTypeFromPlayerRequest.generated.h"

USTRUCT(BlueprintType)
struct FYDebugRemoveAllItemsByTypeFromPlayerRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemType;
    
    BACKENDMODELS_API FYDebugRemoveAllItemsByTypeFromPlayerRequest();
};

