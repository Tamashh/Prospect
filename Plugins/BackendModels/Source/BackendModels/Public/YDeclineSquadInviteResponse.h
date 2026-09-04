#pragma once
#include "CoreMinimal.h"
#include "EYSquadActionResult.h"
#include "YDeclineSquadInviteResponse.generated.h"

USTRUCT(BlueprintType)
struct FYDeclineSquadInviteResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYSquadActionResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString inviteId;
    
    BACKENDMODELS_API FYDeclineSquadInviteResponse();
};

