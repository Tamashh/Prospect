#pragma once
#include "CoreMinimal.h"
#include "YSquadSecretLeaderResponse.generated.h"

USTRUCT(BlueprintType)
struct FYSquadSecretLeaderResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isSecretLeader;
    
    BACKENDMODELS_API FYSquadSecretLeaderResponse();
};

