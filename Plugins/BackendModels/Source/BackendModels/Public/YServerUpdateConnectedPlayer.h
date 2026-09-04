#pragma once
#include "CoreMinimal.h"
#include "EYUserSessionConnectionState.h"
#include "YGameServerRequest.h"
#include "YServerUpdateConnectedPlayer.generated.h"

USTRUCT(BlueprintType)
struct FYServerUpdateConnectedPlayer : public FYGameServerRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SessionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYUserSessionConnectionState ConnectionState;
    
    BACKENDMODELS_API FYServerUpdateConnectedPlayer();
};

