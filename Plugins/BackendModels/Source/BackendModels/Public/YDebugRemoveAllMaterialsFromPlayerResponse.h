#pragma once
#include "CoreMinimal.h"
#include "YCustomItemInfo.h"
#include "YDebugRemoveAllMaterialsFromPlayerResponse.generated.h"

USTRUCT(BlueprintType)
struct FYDebugRemoveAllMaterialsFromPlayerResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCustomItemInfo> returnedMaterials;
    
    BACKENDMODELS_API FYDebugRemoveAllMaterialsFromPlayerResponse();
};

