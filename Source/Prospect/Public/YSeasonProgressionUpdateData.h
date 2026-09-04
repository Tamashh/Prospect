#pragma once
#include "CoreMinimal.h"
#include "YSeasonProgressionCompletedActions.h"
#include "YSeasonProgressionUpdateData.generated.h"

USTRUCT(BlueprintType)
struct PROSPECT_API FYSeasonProgressionUpdateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYSeasonProgressionCompletedActions completedActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 seasonXp;
    
    FYSeasonProgressionUpdateData();
};

