#pragma once
#include "CoreMinimal.h"
#include "YDebugRemoveAllMaterialsFromPlayerRequest.generated.h"

USTRUCT(BlueprintType)
struct FYDebugRemoveAllMaterialsFromPlayerRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    BACKENDMODELS_API FYDebugRemoveAllMaterialsFromPlayerRequest();
};

