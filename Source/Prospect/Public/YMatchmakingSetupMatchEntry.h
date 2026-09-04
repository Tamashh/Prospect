#pragma once
#include "CoreMinimal.h"
#include "YMatchmakingSetupEntry.h"
#include "YMatchmakingSetupMatchEntry.generated.h"

USTRUCT(BlueprintType)
struct FYMatchmakingSetupMatchEntry : public FYMatchmakingSetupEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString fullMapName;
    
    PROSPECT_API FYMatchmakingSetupMatchEntry();
};

