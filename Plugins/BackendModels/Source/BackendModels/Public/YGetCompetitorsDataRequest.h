#pragma once
#include "CoreMinimal.h"
#include "YGetCompetitorsDataRequest.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYGetCompetitorsDataRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 playersAbove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 playersBelow;
    
    FYGetCompetitorsDataRequest();
};

