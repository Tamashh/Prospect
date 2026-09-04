#pragma once
#include "CoreMinimal.h"
#include "YSquadInviteRemoved.generated.h"

USTRUCT(BlueprintType)
struct FYSquadInviteRemoved {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString squadId;
    
    BACKENDMODELS_API FYSquadInviteRemoved();
};

