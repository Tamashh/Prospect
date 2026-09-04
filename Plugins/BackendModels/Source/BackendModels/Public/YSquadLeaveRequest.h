#pragma once
#include "CoreMinimal.h"
#include "YGameServerRequest.h"
#include "YSquadLeaveRequest.generated.h"

USTRUCT(BlueprintType)
struct FYSquadLeaveRequest : public FYGameServerRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Info;
    
    BACKENDMODELS_API FYSquadLeaveRequest();
};

