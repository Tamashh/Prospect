#pragma once
#include "CoreMinimal.h"
#include "YGetInventory.generated.h"

USTRUCT(BlueprintType)
struct FYGetInventory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    BACKENDMODELS_API FYGetInventory();
};

