#pragma once
#include "CoreMinimal.h"
#include "YSquadAIType.h"
#include "YSquadDefinition.generated.h"

USTRUCT(BlueprintType)
struct FYSquadDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYSquadAIType> m_AIsToSpawn;
    
    PROSPECT_API FYSquadDefinition();
};

