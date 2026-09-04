#pragma once
#include "CoreMinimal.h"
#include "YDebugSetAllCraftingMaterialsAmount.generated.h"

USTRUCT(BlueprintType)
struct FYDebugSetAllCraftingMaterialsAmount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 materialAmount;
    
    BACKENDMODELS_API FYDebugSetAllCraftingMaterialsAmount();
};

