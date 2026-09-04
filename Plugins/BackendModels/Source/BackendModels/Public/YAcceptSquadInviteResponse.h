#pragma once
#include "CoreMinimal.h"
#include "EYSquadActionResult.h"
#include "YPlayFabSquad.h"
#include "YAcceptSquadInviteResponse.generated.h"

USTRUCT(BlueprintType)
struct FYAcceptSquadInviteResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayFabSquad squadInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYSquadActionResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
    BACKENDMODELS_API FYAcceptSquadInviteResponse();
};

