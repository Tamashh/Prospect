#pragma once
#include "CoreMinimal.h"
#include "YProgressChange.generated.h"

USTRUCT(BlueprintType)
struct FYProgressChange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 deltaProgress;
    
    PROSPECT_API FYProgressChange();
};

