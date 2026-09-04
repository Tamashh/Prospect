#pragma once
#include "CoreMinimal.h"
#include "YSquadInviteDeclined.generated.h"

USTRUCT(BlueprintType)
struct FYSquadInviteDeclined {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetId;
    
    BACKENDMODELS_API FYSquadInviteDeclined();
};

