#pragma once
#include "CoreMinimal.h"
#include "YGetPlayerInventoryLimit.generated.h"

USTRUCT(BlueprintType)
struct FYGetPlayerInventoryLimit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    BACKENDMODELS_API FYGetPlayerInventoryLimit();
};

