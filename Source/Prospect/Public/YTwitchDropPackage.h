#pragma once
#include "CoreMinimal.h"
#include "YTimestamp.h"
#include "YInventoryItem.h"
#include "YTwitchDropPackage.generated.h"

USTRUCT(BlueprintType)
struct PROSPECT_API FYTwitchDropPackage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PackageId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYInventoryItem> rewardItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYTimestamp unlockTimeUtc;
    
    FYTwitchDropPackage();
};

