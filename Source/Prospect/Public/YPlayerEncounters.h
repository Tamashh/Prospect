#pragma once
#include "CoreMinimal.h"
#include "YPlayerEncounter.h"
#include "YPlayerEncounters.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerEncounters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYPlayerEncounter> m_encounters;
    
    PROSPECT_API FYPlayerEncounters();
};

