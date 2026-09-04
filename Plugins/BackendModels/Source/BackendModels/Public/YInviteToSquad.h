#pragma once
#include "CoreMinimal.h"
#include "YInviteToSquad.generated.h"

USTRUCT(BlueprintType)
struct FYInviteToSquad {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString fromId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetId;
    
    BACKENDMODELS_API FYInviteToSquad();
};

