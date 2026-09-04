#pragma once
#include "CoreMinimal.h"
#include "YInviteToSquadByName.generated.h"

USTRUCT(BlueprintType)
struct FYInviteToSquadByName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString targetName;
    
    BACKENDMODELS_API FYInviteToSquadByName();
};

