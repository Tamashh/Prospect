#pragma once
#include "CoreMinimal.h"
#include "YGameServerRequest.h"
#include "YLastSessionResult.generated.h"

USTRUCT(BlueprintType)
struct FYLastSessionResult : public FYGameServerRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Result;
    
    BACKENDMODELS_API FYLastSessionResult();
};

