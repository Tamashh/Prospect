#pragma once
#include "CoreMinimal.h"
#include "EYSquadActionResult.h"
#include "YPlayFabSquad.h"
#include "YSquadMatchmakingReadyResponse.generated.h"

USTRUCT(BlueprintType)
struct FYSquadMatchmakingReadyResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYSquadActionResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayFabSquad squad;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isSquadReadyForMatch;
    
    BACKENDMODELS_API FYSquadMatchmakingReadyResponse();
};

