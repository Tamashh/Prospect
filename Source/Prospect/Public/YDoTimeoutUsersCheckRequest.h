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
    
    PROSPECT_API FYDoTimeoutUsersCheckRequest();
};

