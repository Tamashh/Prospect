#pragma once
#include "CoreMinimal.h"
#include "YAbilityActionDataTableRow.h"
#include "YAbilityActionTurret.generated.h"

USTRUCT(BlueprintType)
struct FYAbilityActionTurret : public FYAbilityActionDataTableRow {
    GENERATED_BODY()
public:
    PROSPECT_API FYAbilityActionTurret();
};

