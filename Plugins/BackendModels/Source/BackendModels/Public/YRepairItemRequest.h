#pragma once
#include "CoreMinimal.h"
#include "YRepairItemRequest.generated.h"

USTRUCT(BlueprintType)
struct FYRepairItemRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString instanceId;
    
    BACKENDMODELS_API FYRepairItemRequest();
};

