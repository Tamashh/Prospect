#pragma once
#include "CoreMinimal.h"
#include "YSquadInvite.h"
#include "YPendingSquadInvites.generated.h"

USTRUCT(BlueprintType)
struct FYPendingSquadInvites {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYSquadInvite> invites;
    
    BACKENDMODELS_API FYPendingSquadInvites();
};

