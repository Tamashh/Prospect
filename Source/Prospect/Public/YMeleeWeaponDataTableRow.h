#pragma once
#include "CoreMinimal.h"
#include "YWeaponDataTableBase.h"
#include "YMeleeWeaponDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct PROSPECT_API FYMeleeWeaponDataTableRow : public FYWeaponDataTableBase {
    GENERATED_BODY()
public:
    FYMeleeWeaponDataTableRow();
};

