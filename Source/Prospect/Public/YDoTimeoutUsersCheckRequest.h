#pragma once
#include "CoreMinimal.h"
#include "YGameServerRequest.h"
#include "YDoTimeoutUsersCheckRequest.generated.h"

USTRUCT(BlueprintType)
struct FYDoTimeoutUsersCheckRequest : public FYGameServerRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SessionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerCount;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 activePlayerCount;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> playerIds;

    PROSPECT_API FYDoTimeoutUsersCheckRequest();
};

