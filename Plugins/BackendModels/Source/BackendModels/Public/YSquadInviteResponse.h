#pragma once
#include "CoreMinimal.h"
#include "EYSquadActionResult.h"
#include "YPlayFabSquad.h"
#include "YSquadInviteResponse.generated.h"

USTRUCT(BlueprintType)
struct FYSquadInviteResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYSquadActionResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString inviteId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayFabSquad squad;
    
    BACKENDMODELS_API FYSquadInviteResponse();
};

