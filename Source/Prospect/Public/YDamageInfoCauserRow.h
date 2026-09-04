#pragma once
#include "CoreMinimal.h"
#include "YDamageInfoRow.h"
#include "YDamageInfoCauserRow.generated.h"

USTRUCT(BlueprintType)
struct FYDamageInfoCauserRow : public FYDamageInfoRow {
    GENERATED_BODY()
public:
    PROSPECT_API FYDamageInfoCauserRow();
};

