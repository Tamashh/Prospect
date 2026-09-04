#pragma once
#include "CoreMinimal.h"
#include "EYSquadInviteResult.h"
#include "YInviteToSquadByNameResponse.generated.h"

USTRUCT(BlueprintType)
struct FYInviteToSquadByNameResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYSquadInviteResult Result;
    
    BACKENDMODELS_API FYInviteToSquadByNameResponse();
};

