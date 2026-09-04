#pragma once
#include "CoreMinimal.h"
#include "YGameModeConfigEntry.h"
#include "YGameModeConfigurationUpdated.generated.h"

USTRUCT(BlueprintType)
struct FYGameModeConfigurationUpdated {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYGameModeConfigEntry updatedData;
    
    BACKENDMODELS_API FYGameModeConfigurationUpdated();
};

