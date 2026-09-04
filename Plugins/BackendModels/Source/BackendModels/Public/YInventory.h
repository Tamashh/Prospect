#pragma once
#include "CoreMinimal.h"
#include "YCustomItemInfo.h"
#include "YLoreBackendItemInfo.h"
#include "YUserCurrenciesItems.h"
#include "YVanityBackendItemInfo.h"
#include "YInventory.generated.h"

USTRUCT(BlueprintType)
struct FYInventory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYUserCurrenciesItems Currency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCustomItemInfo> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYVanityBackendItemInfo> vanity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYLoreBackendItemInfo> loreItems;
    
    BACKENDMODELS_API FYInventory();
};

