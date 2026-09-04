#pragma once
#include "CoreMinimal.h"
#include "YMatchmakingNVRSetup.generated.h"

USTRUCT(BlueprintType)
struct FYMatchmakingNVRSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 userNVRSamples;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> nvrSquadMultipliers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> minSquadNVRs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 decayIntervalDays;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float decayEffectPerInterval;
    
    PROSPECT_API FYMatchmakingNVRSetup();
};

