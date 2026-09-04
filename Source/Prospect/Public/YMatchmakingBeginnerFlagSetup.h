#pragma once
#include "CoreMinimal.h"
#include "YMatchmakingBeginnerFlagSetup.generated.h"

USTRUCT(BlueprintType)
struct FYMatchmakingBeginnerFlagSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 matchesPlayedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 evacsThreshold;
    
    PROSPECT_API FYMatchmakingBeginnerFlagSetup();
};

