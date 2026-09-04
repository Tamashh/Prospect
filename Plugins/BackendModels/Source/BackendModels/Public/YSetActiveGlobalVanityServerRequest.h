#pragma once
#include "CoreMinimal.h"
#include "YActiveGlobalVanity.h"
#include "YGameServerRequest.h"
#include "YSetActiveGlobalVanityServerRequest.generated.h"

USTRUCT(BlueprintType)
struct FYSetActiveGlobalVanityServerRequest : public FYGameServerRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYActiveGlobalVanity activeVanity;
    
    BACKENDMODELS_API FYSetActiveGlobalVanityServerRequest();
};

