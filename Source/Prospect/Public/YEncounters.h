#pragma once
#include "CoreMinimal.h"
#include "YEncounter.h"
#include "YEncounters.generated.h"

USTRUCT(BlueprintType)
struct FYEncounters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYEncounter> m_encounters;

    PROSPECT_API FYEncounters();
};

