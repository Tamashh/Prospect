#pragma once
#include "CoreMinimal.h"
#include "YCharacterCustomizationRowBase.h"
#include "YMeleeVanityDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FYMeleeVanityDataTableRow : public FYCharacterCustomizationRowBase {
    GENERATED_BODY()
public:
    PROSPECT_API FYMeleeVanityDataTableRow();
};

