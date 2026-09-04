#pragma once
#include "CoreMinimal.h"
#include "EYPlayerEncounterType.h"
#include "YPlayerEncounters.h"
#include "YEncountersPerType.generated.h"

USTRUCT(BlueprintType)
struct FYEncountersPerType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYPlayerEncounterType, FYPlayerEncounters> m_encountersPerType;
    
    PROSPECT_API FYEncountersPerType();
};

