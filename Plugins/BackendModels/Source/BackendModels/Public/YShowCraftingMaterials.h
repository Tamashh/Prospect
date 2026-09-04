#pragma once
#include "CoreMinimal.h"
#include "YShowCraftingMaterials.generated.h"

USTRUCT(BlueprintType)
struct FYShowCraftingMaterials {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    BACKENDMODELS_API FYShowCraftingMaterials();
};

