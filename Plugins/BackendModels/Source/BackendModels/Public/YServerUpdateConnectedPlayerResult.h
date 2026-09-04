#pragma once
#include "CoreMinimal.h"
#include "EYUserSessionConnectionState.h"
#include "YServerUpdateConnectedPlayerResult.generated.h"

USTRUCT(BlueprintType)
struct FYServerUpdateConnectedPlayerResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYUserSessionConnectionState ConnectionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool transactionSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool success;
    
    BACKENDMODELS_API FYServerUpdateConnectedPlayerResult();
};

