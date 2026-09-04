#pragma once
#include "CoreMinimal.h"
#include "YStartItemCraftingClientRequest.generated.h"

USTRUCT(BlueprintType)
struct FYStartItemCraftingClientRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString baseItemId;
    
    BACKENDMODELS_API FYStartItemCraftingClientRequest();
};

