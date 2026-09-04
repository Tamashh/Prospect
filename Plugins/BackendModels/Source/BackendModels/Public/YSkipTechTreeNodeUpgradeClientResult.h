#pragma once
#include "CoreMinimal.h"
#include "YCurrencyItem.h"
#include "YCustomItemInfo.h"
#include "YTechTreeNodeStatus.h"
#include "YSkipTechTreeNodeUpgradeClientResult.generated.h"

USTRUCT(BlueprintType)
struct FYSkipTechTreeNodeUpgradeClientResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYTechTreeNodeStatus upgradedNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCurrencyItem> changedCurrencies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCustomItemInfo> changedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> deletedItems;
    
    BACKENDMODELS_API FYSkipTechTreeNodeUpgradeClientResult();
};

