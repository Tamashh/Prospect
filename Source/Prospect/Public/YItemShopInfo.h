#pragma once
#include "CoreMinimal.h"
#include "YItemCraftingDataPerShop.h"
#include "YItemShopInfo.generated.h"

USTRUCT(BlueprintType)
struct FYItemShopInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYItemCraftingDataPerShop> m_factions;
    
    PROSPECT_API FYItemShopInfo();
};

