#pragma once
#include "CoreMinimal.h"
#include "YSellInventoryUpdate.h"
#include "YSellItemsClientRequest.generated.h"

USTRUCT(BlueprintType)
struct FYSellItemsClientRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString factionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYSellInventoryUpdate inventoryUpdateData;
    
    BACKENDMODELS_API FYSellItemsClientRequest();
};

