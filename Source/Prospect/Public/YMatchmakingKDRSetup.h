#pragma once
#include "CoreMinimal.h"
#include "YMatchmakingKDRSetup.generated.h"

USTRUCT(BlueprintType)
struct FYMatchmakingKDRSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> kdrSquadMultipliers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> minSquadKDRs;
    
    PROSPECT_API FYMatchmakingKDRSetup();
};

