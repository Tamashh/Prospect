#pragma once
#include "CoreMinimal.h"
#include "YTimestamp.h"
#include "YUpdateSeasonWipeDataRequest.generated.h"

USTRUCT(BlueprintType)
struct PROSPECT_API FYUpdateSeasonWipeDataRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYTimestamp highlightInfoLastTimeChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 lastSeasonNumber;
    
    FYUpdateSeasonWipeDataRequest();
};

