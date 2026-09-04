#pragma once
#include "CoreMinimal.h"
#include "YDataTableRowBase.h"
#include "YAssetVariationDefinitionRow.generated.h"

USTRUCT(BlueprintType)
struct FYAssetVariationDefinitionRow : public FYDataTableRowBase {
    GENERATED_BODY()
public:
    PROSPECT_API FYAssetVariationDefinitionRow();
};

