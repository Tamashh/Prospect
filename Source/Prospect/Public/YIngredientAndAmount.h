#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "YIngredientAndAmount.generated.h"

USTRUCT(BlueprintType)
struct FYIngredientAndAmount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle m_ingredient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_amount;
    
    PROSPECT_API FYIngredientAndAmount();
};

