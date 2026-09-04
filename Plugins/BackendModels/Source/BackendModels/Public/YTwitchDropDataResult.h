#pragma once
#include "CoreMinimal.h"
#include "YTwitchDropPackageResult.h"
#include "YTwitchDropDataResult.generated.h"

USTRUCT(BlueprintType)
struct FYTwitchDropDataResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYTwitchDropPackageResult> packages;
    
    BACKENDMODELS_API FYTwitchDropDataResult();
};

