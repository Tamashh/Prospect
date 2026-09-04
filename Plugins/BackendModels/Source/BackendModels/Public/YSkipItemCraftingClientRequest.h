#pragma once
#include "CoreMinimal.h"
#include "YSkipItemCraftingClientRequest.generated.h"

USTRUCT(BlueprintType)
struct FYSkipItemCraftingClientRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool useOptionalCosts;
    
    BACKENDMODELS_API FYSkipItemCraftingClientRequest();
};

