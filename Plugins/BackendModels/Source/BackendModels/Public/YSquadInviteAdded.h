#pragma once
#include "CoreMinimal.h"
#include "YSquadInvite.h"
#include "YSquadInviteAdded.generated.h"

USTRUCT(BlueprintType)
struct FYSquadInviteAdded {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYSquadInvite invite;
    
    BACKENDMODELS_API FYSquadInviteAdded();
};

