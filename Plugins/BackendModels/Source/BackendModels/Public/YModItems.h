#pragma once
#include "CoreMinimal.h"
#include "YModItems.generated.h"

USTRUCT(BlueprintType)
struct FYModItems {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> M;
    
    BACKENDMODELS_API FYModItems();
};

