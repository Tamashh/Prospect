#pragma once
#include "CoreMinimal.h"
#include "YClearInventory.generated.h"

USTRUCT(BlueprintType)
struct FYClearInventory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    BACKENDMODELS_API FYClearInventory();
};

