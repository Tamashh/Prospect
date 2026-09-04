#pragma once
#include "CoreMinimal.h"
#include "YCharacterCustomizationRowBase.h"
#include "YNormalEmoteDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FYNormalEmoteDataTableRow : public FYCharacterCustomizationRowBase {
    GENERATED_BODY()
public:
    PROSPECT_API FYNormalEmoteDataTableRow();
};

