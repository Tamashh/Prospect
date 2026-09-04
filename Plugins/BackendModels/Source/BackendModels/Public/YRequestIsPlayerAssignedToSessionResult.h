#pragma once
#include "CoreMinimal.h"
#include "YRequestIsPlayerAssignedToSessionResult.generated.h"

USTRUCT(BlueprintType)
struct FYRequestIsPlayerAssignedToSessionResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool success;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    BACKENDMODELS_API FYRequestIsPlayerAssignedToSessionResult();
};

