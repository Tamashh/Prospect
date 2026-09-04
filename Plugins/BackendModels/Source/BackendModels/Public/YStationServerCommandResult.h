#pragma once
#include "CoreMinimal.h"
#include "EYStationCommandResultType.h"
#include "YStationServerCommandResult.generated.h"

USTRUCT(BlueprintType)
struct FYStationServerCommandResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYStationCommandResultType Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Context;
    
    BACKENDMODELS_API FYStationServerCommandResult();
};

