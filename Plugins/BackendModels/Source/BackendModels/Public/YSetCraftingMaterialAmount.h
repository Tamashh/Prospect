#pragma once
#include "CoreMinimal.h"
#include "YSetCraftingMaterialAmount.generated.h"

USTRUCT(BlueprintType)
struct FYSetCraftingMaterialAmount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString materialName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    BACKENDMODELS_API FYSetCraftingMaterialAmount();
};

