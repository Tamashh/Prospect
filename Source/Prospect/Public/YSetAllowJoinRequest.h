#pragma once
#include "CoreMinimal.h"
#include "YGameServerRequest.h"
#include "YSetAllowJoinRequest.generated.h"

USTRUCT(BlueprintType)
struct FYSetAllowJoinRequest : public FYGameServerRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SessionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool allowJoin;
    
    PROSPECT_API FYSetAllowJoinRequest();
};

