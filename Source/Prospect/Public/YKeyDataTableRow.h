#pragma once
#include "CoreMinimal.h"
#include "YMaterialRow.h"
#include "YKeyDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FYKeyDataTableRow : public FYMaterialRow {
    GENERATED_BODY()
public:
    PROSPECT_API FYKeyDataTableRow();
};

