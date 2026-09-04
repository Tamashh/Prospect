#pragma once
#include "CoreMinimal.h"
#include "YTimestamp.h"
#include "YTwitchDropRewardResult.h"
#include "YTwitchDropPackageResult.generated.h"

USTRUCT(BlueprintType)
struct FYTwitchDropPackageResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PackageId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYTwitchDropRewardResult> rewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DropId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYTimestamp unlockTimeUtc;
    
    BACKENDMODELS_API FYTwitchDropPackageResult();
};

