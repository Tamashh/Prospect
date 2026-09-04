#pragma once
#include "CoreMinimal.h"
#include "YDeclineSquadInvite.generated.h"

USTRUCT(BlueprintType)
struct FYDeclineSquadInvite {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    BACKENDMODELS_API FYDeclineSquadInvite();
};

