#pragma once
#include "CoreMinimal.h"
#include "YTimestamp.h"
#include "YClaimableStarterPackItem.h"
#include "YClaimableStarterPack.generated.h"

USTRUCT(BlueprintType)
struct PROSPECT_API FYClaimableStarterPack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString bundleId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYTimestamp unlockTimeUtc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYClaimableStarterPackItem> rewardItems;
    
    FYClaimableStarterPack();
};

