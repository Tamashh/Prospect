#pragma once
#include "CoreMinimal.h"
#include "EYSquadActionResult.h"
#include "YSquadInvite.h"
#include "YInviteToSquadResponse.generated.h"

USTRUCT(BlueprintType)
struct FYInviteToSquadResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYSquadActionResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYSquadInvite invite;
    
    BACKENDMODELS_API FYInviteToSquadResponse();
};

