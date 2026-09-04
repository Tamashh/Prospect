#pragma once
#include "CoreMinimal.h"
#include "YGameServerRequest.h"
#include "YGetActiveGlobalVanityServerRequest.generated.h"

USTRUCT(BlueprintType)
struct FYGetActiveGlobalVanityServerRequest : public FYGameServerRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    BACKENDMODELS_API FYGetActiveGlobalVanityServerRequest();
};

