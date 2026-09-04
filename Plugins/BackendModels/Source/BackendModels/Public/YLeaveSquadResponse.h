#pragma once
#include "CoreMinimal.h"
#include "EYSquadActionResult.h"
#include "YLeaveSquadResponse.generated.h"

USTRUCT(BlueprintType)
struct FYLeaveSquadResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYSquadActionResult Result;
    
    BACKENDMODELS_API FYLeaveSquadResponse();
};

