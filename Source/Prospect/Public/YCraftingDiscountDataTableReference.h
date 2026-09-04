#pragma once
#include "CoreMinimal.h"
#include "YCraftingDiscountDataTableReference.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FYCraftingDiscountDataTableReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_dataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_sourceFileName;
    
    PROSPECT_API FYCraftingDiscountDataTableReference();
};

