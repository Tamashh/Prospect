#pragma once
#include "CoreMinimal.h"
#include "YAudioDataTableRow.h"
#include "YUIAudioDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FYUIAudioDataTableRow : public FYAudioDataTableRow {
    GENERATED_BODY()
public:
    PROSPECT_API FYUIAudioDataTableRow();
};

