#pragma once
#include "CoreMinimal.h"
#include "YTimestamp.h"
#include "YPlayerQuartersLevelUpdated.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerQuartersLevelUpdated {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYTimestamp upgradeStartedTime;
    
    BACKENDMODELS_API FYPlayerQuartersLevelUpdated();
};

