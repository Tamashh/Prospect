#pragma once
#include "CoreMinimal.h"
#include "YDebugSetCraftingMaterialAmount.generated.h"

USTRUCT(BlueprintType)
struct FYDebugSetCraftingMaterialAmount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString materialName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 materialAmount;
    
    BACKENDMODELS_API FYDebugSetCraftingMaterialAmount();
};

