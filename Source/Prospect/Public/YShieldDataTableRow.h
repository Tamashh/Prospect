#pragma once
#include "CoreMinimal.h"
#include "YArmorDataTableRow.h"
#include "YShieldDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FYShieldDataTableRow : public FYArmorDataTableRow {
    GENERATED_BODY()
public:
    PROSPECT_API FYShieldDataTableRow();
};

