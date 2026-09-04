#pragma once
#include "CoreMinimal.h"
#include "YSquad.h"
#include "YSquadUpdated.generated.h"

USTRUCT(BlueprintType)
struct FYSquadUpdated {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYSquad squad;
    
    BACKENDMODELS_API FYSquadUpdated();
};

