#pragma once
#include "CoreMinimal.h"
#include "YGameServerRequest.h"
#include "YGetTechTreeNodeDataServerRequest.generated.h"

USTRUCT(BlueprintType)
struct FYGetTechTreeNodeDataServerRequest : public FYGameServerRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    BACKENDMODELS_API FYGetTechTreeNodeDataServerRequest();
};

