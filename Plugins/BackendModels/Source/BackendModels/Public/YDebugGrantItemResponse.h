#pragma once
#include "CoreMinimal.h"
#include "YCustomItemInfo.h"
#include "YDebugGrantItemResponse.generated.h"

USTRUCT(BlueprintType)
struct FYDebugGrantItemResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCustomItemInfo> updatedItems;
    
    BACKENDMODELS_API FYDebugGrantItemResponse();
};

