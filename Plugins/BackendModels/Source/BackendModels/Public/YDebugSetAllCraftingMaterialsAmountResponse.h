#pragma once
#include "CoreMinimal.h"
#include "YCustomItemInfo.h"
#include "YDebugSetAllCraftingMaterialsAmountResponse.generated.h"

USTRUCT(BlueprintType)
struct FYDebugSetAllCraftingMaterialsAmountResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCustomItemInfo> changedMaterials;
    
    BACKENDMODELS_API FYDebugSetAllCraftingMaterialsAmountResponse();
};

