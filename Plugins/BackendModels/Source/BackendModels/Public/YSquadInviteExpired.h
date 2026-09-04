#pragma once
#include "CoreMinimal.h"
#include "YSquadInviteExpired.generated.h"

USTRUCT(BlueprintType)
struct FYSquadInviteExpired {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetId;
    
    BACKENDMODELS_API FYSquadInviteExpired();
};

