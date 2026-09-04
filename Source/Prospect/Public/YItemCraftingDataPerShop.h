#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YItemRecipe.h"
#include "YItemCraftingDataPerShop.generated.h"

USTRUCT(BlueprintType)
struct FYItemCraftingDataPerShop {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_shop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYItemRecipe m_craftingPrice;
    
    PROSPECT_API FYItemCraftingDataPerShop();
};

