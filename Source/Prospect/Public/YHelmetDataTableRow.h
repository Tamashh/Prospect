#pragma once
#include "CoreMinimal.h"
#include "YArmorDataTableRow.h"
#include "YHelmetDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FYHelmetDataTableRow : public FYArmorDataTableRow {
    GENERATED_BODY()
public:
    PROSPECT_API FYHelmetDataTableRow();
};

