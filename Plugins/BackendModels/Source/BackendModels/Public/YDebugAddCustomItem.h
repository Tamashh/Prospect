#pragma once
#include "CoreMinimal.h"
#include "YDebugAddCustomItem.generated.h"

USTRUCT(BlueprintType)
struct FYDebugAddCustomItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString baseItemId;
    
    BACKENDMODELS_API FYDebugAddCustomItem();
};

