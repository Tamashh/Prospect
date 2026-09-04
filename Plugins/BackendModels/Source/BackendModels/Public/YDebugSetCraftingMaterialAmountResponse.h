#pragma once
#include "CoreMinimal.h"
#include "YCustomItemInfo.h"
#include "YDebugSetCraftingMaterialAmountResponse.generated.h"

USTRUCT(BlueprintType)
struct FYDebugSetCraftingMaterialAmountResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCustomItemInfo> changedMaterial;
    
    BACKENDMODELS_API FYDebugSetCraftingMaterialAmountResponse();
};

