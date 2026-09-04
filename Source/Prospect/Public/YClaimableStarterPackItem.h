#pragma once
#include "CoreMinimal.h"
#include "YInventoryItem.h"
#include "YClaimableStarterPackItem.generated.h"

USTRUCT(BlueprintType)
struct PROSPECT_API FYClaimableStarterPackItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYInventoryItem inventoryItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isCurrency;
    
    FYClaimableStarterPackItem();
};

