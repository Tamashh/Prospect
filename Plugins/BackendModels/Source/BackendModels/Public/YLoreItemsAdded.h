#pragma once
#include "CoreMinimal.h"
#include "YLoreBackendItemInfo.h"
#include "YLoreItemsAdded.generated.h"

USTRUCT(BlueprintType)
struct FYLoreItemsAdded {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYLoreBackendItemInfo> loreItems;
    
    BACKENDMODELS_API FYLoreItemsAdded();
};

