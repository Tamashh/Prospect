#pragma once
#include "CoreMinimal.h"
#include "YImpactEffectsRow.h"
#include "YOverrideImpactEffectsRow.generated.h"

USTRUCT(BlueprintType)
struct FYOverrideImpactEffectsRow : public FYImpactEffectsRow {
    GENERATED_BODY()
public:
    PROSPECT_API FYOverrideImpactEffectsRow();
};

