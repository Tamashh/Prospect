#pragma once
#include "CoreMinimal.h"
#include "YGameModeConfigEntry.h"
#include "YConfiguration.generated.h"

USTRUCT(BlueprintType)
struct FYConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYGameModeConfigEntry> GameModes;
    
    BACKENDMODELS_API FYConfiguration();
};

