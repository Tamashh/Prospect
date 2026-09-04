#pragma once
#include "CoreMinimal.h"
#include "YDebugGrantItemRequest.generated.h"

USTRUCT(BlueprintType)
struct FYDebugGrantItemRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemId;
    
    BACKENDMODELS_API FYDebugGrantItemRequest();
};

